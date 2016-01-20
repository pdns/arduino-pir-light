#include "ToggleButton.h"
#include "RGBColor.h"

ToggleButton permOnSwitch(2);
RGBColor c(1,10,200);

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  permOnSwitch.update();
  if (permOnSwitch.isOn()) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}
