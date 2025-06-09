#include <Arduino.h>
#include <FreeRTOS.h>
#include "lidar_tfluna.h"
#include "ultrasonic_hc_sr04.h"
#include "motor_control.h"

// Hardware Configuration
#define TF_LUNA_I2C_ADDR 0x10
#define US_FRONT_TRIG 16
#define US_FRONT_ECHO 17
#define MOTOR_ENA 25
#define MOTOR_IN1 26
#define MOTOR_IN2 27

// Global Objects
TF_Luna lidar;
Ultrasonic frontUS(US_FRONT_TRIG, US_FRONT_ECHO);
MotorController motor(MOTOR_ENA, MOTOR_IN1, MOTOR_IN2);

// RTOS Tasks
void lidarTask(void *pvParam) {
    while(1) {
        float distance = lidar.getDistance();
        if(lidar.isDataValid() && distance < 80.0) {
            Serial.printf("[LiDAR] Distance: %.2f cm\n", distance);
        }
        vTaskDelay(pdMS_TO_TICKS(50));
    }
}

void ultrasonicTask(void *pvParam) {
    while(1) {
        float distance = frontUS.getDistanceCM();
        Serial.printf("[Ultrasonic] Distance: %.2f cm\n", distance);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

void controlTask(void *pvParam) {
    while(1) {
        float lidarDist = lidar.getDistance();
        float usDist = frontUS.getDistanceCM();
        
        if(usDist < 20.0) {
            motor.stop();
            Serial.println("EMERGENCY STOP!");
        }
        else if(lidarDist < 50.0) {
            motor.setSpeed(150);
            motor.forward();
            Serial.println("Cruising...");
        }
        else {
            motor.setSpeed(200);
            motor.forward();
            Serial.println("Full speed ahead!");
        }
        
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}

void setup() {
    Serial.begin(115200);
    lidar.begin(TF_LUNA_I2C_ADDR);
    
    // Create RTOS tasks
    xTaskCreate(lidarTask, "LiDAR Task", 2048, NULL, 2, NULL);
    xTaskCreate(ultrasonicTask, "Ultrasonic Task", 2048, NULL, 1, NULL);
    xTaskCreate(controlTask, "Control Task", 2048, NULL, 3, NULL);
    
    Serial.println("Autonomous System Started");
}

void loop() {
    // FreeRTOS handles task scheduling
    vTaskDelete(NULL);
}
