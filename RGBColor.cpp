#include "RGBColor.h"

RGBColor::RGBColor(int red, int green, int blue) {
  setRed(red);
  setGreen(green);
  setBlue(blue);
}

byte RGBColor::getRed() { return r; }
byte RGBColor::getGreen() { return g; }
byte RGBColor::getBlue() { return b; }

void RGBColor::setRed(int val) { r = validate(val); }
void RGBColor::setGreen(int val) { g = validate(val); }
void RGBColor::setBlue(int val) { b = validate(val); }

byte RGBColor::validate(int val) {
  if (val > 255) val = 255;
  else if (val < 0) val = 0;
  return val;
}
