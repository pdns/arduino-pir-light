#ifndef RGBLED_H
#define RGBLED_H

#include "RGBColor.h"

class RGBLED {

  public:
    RGBLED(int rPin, int gPin, int bPin, int rVal, int gVal, int bVal);
    RGBLED(int rPin, int gPin, int bPin, RGBColor c);
    void on();
    void off();

  private:
    int rPin;
    int gPin;
    int bPin;
    RGBColor color;
    void setPins();
};

#endif
