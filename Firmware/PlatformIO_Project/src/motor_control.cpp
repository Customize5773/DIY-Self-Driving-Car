#include "motor_control.h"

MotorController::MotorController(uint8_t enaPin, uint8_t in1Pin, uint8_t in2Pin)
    : _enaPin(enaPin), _in1Pin(in1Pin), _in2Pin(in2Pin) {
    pinMode(_enaPin, OUTPUT);
    pinMode(_in1Pin, OUTPUT);
    pinMode(_in2Pin, OUTPUT);
    stop();
}

void MotorController::setSpeed(int speed) {
    analogWrite(_enaPin, constrain(speed, 0, 255));
}

void MotorController::forward() {
    digitalWrite(_in1Pin, HIGH);
    digitalWrite(_in2Pin, LOW);
}

void MotorController::backward() {
    digitalWrite(_in1Pin, LOW);
    digitalWrite(_in2Pin, HIGH);
}

void MotorController::stop() {
    digitalWrite(_in1Pin, LOW);
    digitalWrite(_in2Pin, LOW);
    setSpeed(0);
}
