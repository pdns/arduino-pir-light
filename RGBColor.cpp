#include "RGBColor.h"

RGBColor::RGBColor(int red, int green, int blue) {
  setRed(red);
  setGreen(green);
  setBlue(blue);
}

byte RGBColor::getRed() const { return r; }
byte RGBColor::getGreen() const { return g; }
byte RGBColor::getBlue() const { return b; }

void RGBColor::setRed(int val) { r = constrain(val, 0, 255); }
void RGBColor::setGreen(int val) { g = constrain(val, 0, 255); }
void RGBColor::setBlue(int val) { b = constrain(val, 0, 255); }

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

RGBColor& RGBColor::operator*=(const float num) {
  this->setRed(this->getRed() * num);
  this->setGreen(this->getGreen() * num);
  this->setBlue(this->getBlue() * num);
  return *this;
}

RGBColor RGBColor::operator+(const RGBColor &other) {
  return RGBColor(*this) += other;
}

RGBColor RGBColor::operator-(const RGBColor &other) {
  return RGBColor(*this) -= other;
}

RGBColor RGBColor::operator*(const float num) {
  return RGBColor(*this) *= num;
}
