#include "RGBLED.h"

RGBLED::RGBLED(int rPin, int gPin, int bPin, int rVal, int gVal, int bVal) :
  rPin(rPin), gPin(gPin), bPin(bPin), color(rVal, gVal, bVal)
{
  setPins();
}

RGBLED::RGBLED(int rPin, int gPin, int bPin, RGBColor c) :
  rPin(rPin), gPin(gPin), bPin(bPin), color(c)
{
  setPins();
}

void RGBLED::on() {
  analogWrite(rPin, color.getRed());
  analogWrite(gPin, color.getGreen());
  analogWrite(bPin, color.getBlue());
}

void RGBLED::off() {
  analogWrite(rPin, 0);
  analogWrite(gPin, 0);
  analogWrite(bPin, 0);
}

void RGBLED::setPins() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}
