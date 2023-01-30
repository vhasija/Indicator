#include "Indicator.h"
#include "mbed.h"

Indicator::Indicator(PinName pin): _indicator(pin) {}


void Indicator::turn_on() { 
    _indicator = 1; }
void Indicator::turn_off() { 
    _indicator = 0; }
void Indicator::toggle() { 
    _indicator = !_indicator; }