#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

#include "Arduino.h"

// Turn a push button (the kind that only closes a circuit until you remove
// your finger) into a button that toggles states.
// Stores two states; one state is toggled with a quick button press,
// and the other state is toggled by holding the button.
class ToggleButton {

  public:
    ToggleButton(byte rPin);
    void update(); // Call in loop to update state
    bool isOn(); // Toggled with quick button press
    bool alternateIsOn(); // Toggled with button hold

  private:
    byte pin;
    bool currState;
    bool prevPressed;
    bool holdState;
    bool holdGuard;
    unsigned int holdTime;
    bool buttonIsHeld();
};

#endif
