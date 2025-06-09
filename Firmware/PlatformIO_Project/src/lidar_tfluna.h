#pragma once
#include <Wire.h>

class TF_Luna {
public:
    TF_Luna(TwoWire &wire = Wire);
    bool begin(uint8_t address = 0x10);
    float getDistance();
    bool isDataValid();
    
private:
    TwoWire *_wire;
    uint8_t _addr;
    uint8_t _data[7];
};
