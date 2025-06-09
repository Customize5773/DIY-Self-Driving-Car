#include "lidar_tfluna.h"

TF_Luna::TF_Luna(TwoWire &wire) : _wire(&wire) {}

bool TF_Luna::begin(uint8_t address) {
    _addr = address;
    _wire->begin();
    return true;
}

float TF_Luna::getDistance() {
    _wire->beginTransmission(_addr);
    _wire->write(0x01);
    _wire->write(0x02);
    _wire->endTransmission();
    
    delay(10);
    
    if (_wire->requestFrom(_addr, 7) == 7) {
        for (int i=0; i<7; i++) {
            _data[i] = _wire->read();
        }
        return (float)(_data[2] + (_data[3] << 8)) / 100.0;
    }
    return -1.0;
}

bool TF_Luna::isDataValid() {
    return (_data[0] == 0x59 && _data[1] == 0x59);
}
