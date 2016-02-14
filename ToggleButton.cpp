#include "ToggleButton.h"

ToggleButton::ToggleButton(byte rPin) : pin(rPin) {
  pinMode(rPin, INPUT);
  currState = false;
  prevPressed = false;
  holdState = false;
  holdTime = 0;
}

void ToggleButton::update() {
  if (!buttonIsHeld()) {
    if (prevPressed) {
      // Do nothing if tiny hold time - implies button malfunction
      if (holdTime < 500) return;

      // Don't change primary state if hold state was just toggled
      if (holdGuard) {
        holdGuard = false;
      } else {
        currState = !currState;
      }

    }
    prevPressed = false;
    holdTime = 0;
  } else {
    prevPressed = true;
    ++holdTime;
    if (holdTime == 60000 && !holdGuard) {
      holdState = !holdState;
      holdGuard = true;
    }
  }
}

bool ToggleButton::isOn() {
  return currState;
}

bool ToggleButton::alternateIsOn() {
  return holdState;
}

bool ToggleButton::buttonIsHeld() {
  return digitalRead(pin) == HIGH;
}
