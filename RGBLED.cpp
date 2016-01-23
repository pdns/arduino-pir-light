#include "RGBLED.h"

RGBLED::RGBLED(int rPin, int gPin, int bPin,
               int rVal, int gVal, int bVal, float fadeSpeed) :
  rPin(rPin), gPin(gPin), bPin(bPin), color(rVal, gVal, bVal),
  fadePerc(fadeSpeed), currFade(0)
{
  setPins();
}

RGBLED::RGBLED(int rPin, int gPin, int bPin, RGBColor c, float fadeSpeed) :
  rPin(rPin), gPin(gPin), bPin(bPin), color(c),
  fadePerc(fadeSpeed), currFade(0)
{
  setPins();
}

void RGBLED::on() {
  lightAsColor(color * currFade);
  currFade = currFade >= 1 ? 1 : currFade + fadePerc;
}

void RGBLED::off() {
  lightAsColor(color * currFade);
  currFade = currFade <= 0 ? 0 : currFade - fadePerc;
}

void RGBLED::setPins() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void RGBLED::lightAsColor(RGBColor c) {
  analogWrite(rPin, c.getRed());
  analogWrite(gPin, c.getGreen());
  analogWrite(bPin, c.getBlue());
}
