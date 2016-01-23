#ifndef RGBCOLOR_H
#define RGBCOLOR_H

#include "Arduino.h"
// #include "math.h"

class RGBColor {

  public:
    RGBColor(int red, int green, int blue);
    byte getRed() const;
    byte getGreen() const;
    byte getBlue() const;
    void setRed(int val);
    void setGreen(int val);
    void setBlue(int val);
    RGBColor& operator+=(const RGBColor &other);
    RGBColor& operator-=(const RGBColor &other);
    RGBColor& operator*=(const float num);
    RGBColor operator+(const RGBColor &other);
    RGBColor operator-(const RGBColor &other);
    RGBColor operator*(const float num);

  private:
    byte r;
    byte g;
    byte b;
};

#endif
