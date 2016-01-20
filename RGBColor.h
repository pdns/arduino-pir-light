#ifndef RGBCOLOR_H
#define RGBCOLOR_H

#include "Arduino.h"

class RGBColor {

  public:
    RGBColor(int red, int green, int blue);
    byte getRed();
    byte getGreen();
    byte getBlue();
    void setRed(int val);
    void setGreen(int val);
    void setBlue(int val);

  private:
    byte r;
    byte g;
    byte b;
    byte validate(int val);
};

#endif
