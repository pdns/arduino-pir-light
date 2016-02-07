#include "ToggleButton.h"
#include "RGBColor.h"
#include "RGBLED.h"

byte sensorPin = 4;

ToggleButton permOnSwitch(2);
RGBColor a(1,10,200);
RGBColor b(255,255,255);
RGBColor c(200,1,200);
RGBColor d(0,0,0);
RGBColor e(255, 0, 168);
RGBColor f(255, 255, 0);
RGBLED light(9, 10, 11, f, 0.0001);

void setup() {
  pinMode(13, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  permOnSwitch.update();
  if (permOnSwitch.isOn() || sensorTripped()) {
    digitalWrite(13, HIGH);
    light.on();
  }
  else {
    digitalWrite(13, LOW);
    light.off();
  }
}

bool sensorTripped() {
  return digitalRead(sensorPin) == HIGH;
}
