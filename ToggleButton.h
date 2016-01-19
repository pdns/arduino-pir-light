#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

#include "Arduino.h"

// Turn a push button (the kind that only closes a circuit until you remove
// your finger) into a button that toggles an on/off state.
class ToggleButton {

  public:
    ToggleButton(int rPin);
    void update();
    bool isOn();

  private:
    int pin;
    bool currState;
    bool prevPressed;
    bool buttonIsHeld();
};

#endif
