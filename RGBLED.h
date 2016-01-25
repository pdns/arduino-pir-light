#ifndef RGBLED_H
#define RGBLED_H

#include "RGBColor.h"

class RGBLED {

  public:
    RGBLED(int rPin, int gPin, int bPin, int rVal, int gVal, int bVal,
           float fadeSpeed = 1);
    RGBLED(int rPin, int gPin, int bPin, RGBColor c, float fadeSpeed = 1);
    void on();
    void off();

  private:
    static const byte gamma[];
    int rPin;
    int gPin;
    int bPin;
    RGBColor color;
    float fadePerc;
    float currFade;
    void setPins();
    void lightAsColor(RGBColor c);
};

#endif
