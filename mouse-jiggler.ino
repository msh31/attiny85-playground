#include "DigiMouse.h"

void setup() {
  DigiMouse.begin();
}

void loop() {
  DigiMouse.moveX(50);
  DigiMouse.delay(25);
  DigiMouse.moveX(-35);
  DigiMouse.delay(25);
  DigiMouse.moveY(100);
  DigiMouse.delay(30);
  DigiMouse.moveY(-69);
}
