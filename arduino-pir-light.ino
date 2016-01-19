#include "ToggleButton.h"

ToggleButton permOnSwitch(2);

void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
  permOnSwitch.update();
  if (permOnSwitch.isOn()) digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);
}
