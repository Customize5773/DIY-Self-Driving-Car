#pragma once
#include <Arduino.h>

class Ultrasonic {
public:
    Ultrasonic(uint8_t trigPin, uint8_t echoPin);
    float getDistanceCM();
    
private:
    uint8_t _trigPin;
    uint8_t _echoPin;
};
