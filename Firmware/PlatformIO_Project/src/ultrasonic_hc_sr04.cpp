#include "ultrasonic_hc_sr04.h"

Ultrasonic::Ultrasonic(uint8_t trigPin, uint8_t echoPin) 
    : _trigPin(trigPin), _echoPin(echoPin) {
    pinMode(_trigPin, OUTPUT);
    pinMode(_echoPin, INPUT);
}

float Ultrasonic::getDistanceCM() {
    digitalWrite(_trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(_trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trigPin, LOW);
    
    long duration = pulseIn(_echoPin, HIGH);
    return duration * 0.034 / 2;
}
