#include "RGBColor.h"

RGBColor::RGBColor(int red, int green, int blue) {
  setRed(red);
  setGreen(green);
  setBlue(blue);
}

byte RGBColor::getRed() const { return r; }
byte RGBColor::getGreen() const { return g; }
byte RGBColor::getBlue() const { return b; }

void RGBColor::setRed(int val) { r = validate(val); }
void RGBColor::setGreen(int val) { g = validate(val); }
void RGBColor::setBlue(int val) { b = validate(val); }

RGBColor& RGBColor::operator+=(const RGBColor &other) {
  this->setRed(this->getRed() + other.getRed());
  this->setGreen(this->getGreen() + other.getGreen());
  this->setBlue(this->getBlue() + other.getBlue());
  return *this;
}

RGBColor& RGBColor::operator-=(const RGBColor &other) {
  this->setRed(this->getRed() - other.getRed());
  this->setGreen(this->getGreen() - other.getGreen());
  this->setBlue(this->getBlue() - other.getBlue());
  return *this;
}

RGBColor RGBColor::operator+(const RGBColor &other) {
  return RGBColor(*this) += other;
}

RGBColor RGBColor::operator-(const RGBColor &other) {
  return RGBColor(*this) -= other;
}

byte RGBColor::validate(int val) {
  if (val > 255) val = 255;
  else if (val < 0) val = 0;
  return val;
}
