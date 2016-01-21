#include "ToggleButton.h"
#include "RGBColor.h"

ToggleButton permOnSwitch(2);
RGBColor a(1,10,200);
RGBColor b(1,10,200);
RGBColor c(1,10,200);
RGBColor d(0,0,0);

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
  }
  else {
    digitalWrite(13, LOW);
  }
}
