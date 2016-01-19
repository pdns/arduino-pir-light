#include "ToggleButton.h"

ToggleButton::ToggleButton(int rPin) : pin(rPin) {
  digitalRead(pin);
  currState = false;
  prevPressed = false;
}

void ToggleButton::update() {
  if (!buttonIsHeld()) {
    if (prevPressed) currState = !currState;
    prevPressed = false;
  } else prevPressed = true;
}

bool ToggleButton::isOn() {
  return currState;
}

bool ToggleButton::buttonIsHeld() {
  return digitalRead(pin) == HIGH;
}
