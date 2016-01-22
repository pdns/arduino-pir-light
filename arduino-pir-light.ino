#include "ToggleButton.h"
#include "RGBColor.h"
#include "RGBLED.h"

ToggleButton permOnSwitch(2);
RGBColor a(1,10,200);
RGBColor b(1,10,200);
RGBColor c(200,1,200);
RGBColor d(0,0,0);
RGBLED light(9, 10, 11, c);

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void printColor(RGBColor& c) {
  Serial.print(c.getRed());
  Serial.print(',');
  Serial.print(c.getGreen());
  Serial.print(',');
  Serial.print(c.getBlue());
  Serial.print('\n');
}

void loop() {
  // printColor(a);
  // printColor(b);
  // printColor(c);
  // printColor(d);
  // delay(1000);

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
