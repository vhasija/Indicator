#ifndef MBED_INDICATOR_H
#define MBED_INDICATOR_H

#include "mbed.h"

class Indicator {
public:
  Indicator(PinName pin);
  
  void turn_on();
  void turn_off();
  void toggle();

private:
  DigitalOut _indicator;
};

#endif
