#pragma once
#include <Arduino.h>

class MotorController {
public:
    MotorController(uint8_t enaPin, uint8_t in1Pin, uint8_t in2Pin);
    void setSpeed(int speed);
    void forward();
    void backward();
    void stop();
    
private:
    uint8_t _enaPin;
    uint8_t _in1Pin;
    uint8_t _in2Pin;
};
