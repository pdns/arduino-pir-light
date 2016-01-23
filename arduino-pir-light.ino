#include "ToggleButton.h"
#include "RGBColor.h"
#include "RGBLED.h"

ToggleButton permOnSwitch(2);
RGBColor a(1,10,200);
RGBColor b(255,255,255);
RGBColor c(200,1,200);
RGBColor d(0,0,0);
RGBColor e(255, 0, 168);
RGBLED light(9, 10, 11, e, 0.0001);

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  permOnSwitch.update();
  if (permOnSwitch.isOn()) {
    digitalWrite(13, HIGH);
    light.on();
  }
  else {
    digitalWrite(13, LOW);
    light.off();
  }
}
