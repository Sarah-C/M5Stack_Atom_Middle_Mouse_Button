
#include "M5Atom.h"
#include <BleMouse.h>

BleMouse BLEMouse("M5Atom: Middle mouse button", "Atom Lite", 100);

bool BLEIsConnected = false;
bool BLEPreviouslyConnected = false;

bool buttonIsPressed = false;
bool buttonPreviouslyPressed = false;

CRGB colorPressed = CRGB(0x20, 0x00, 0x00);
CRGB colorNotPressed = CRGB(0x00, 0x10, 0x00);
CRGB BLENotConnected = CRGB(0x00, 0x10, 0x10);

void LED(CRGB col){
  M5.dis.drawpix(0, col);
}

void setup(){
  M5.begin(true, false, true);
  delay(50);
  LED(BLENotConnected);
  BLEMouse.begin();
}

void doPressed(){
  BLEMouse.press(MOUSE_MIDDLE);
  LED(colorPressed);
}

void doReleased(){
  BLEMouse.release(MOUSE_MIDDLE);
  LED(colorNotPressed);
}

void processButtonState(){
  M5.update();
  buttonIsPressed = M5.Btn.isPressed();
  if(buttonIsPressed&&!buttonPreviouslyPressed) doPressed();
  if(!buttonIsPressed&&buttonPreviouslyPressed) doReleased();
  buttonPreviouslyPressed = buttonIsPressed;
}

void processBLEState(){
  BLEIsConnected = BLEMouse.isConnected();
  if(BLEIsConnected&&!BLEPreviouslyConnected) LED(colorNotPressed);
  if(!BLEIsConnected&&BLEPreviouslyConnected) LED(BLENotConnected);
  BLEPreviouslyConnected = BLEIsConnected;
}

void loop(){
  processBLEState();
  if(BLEIsConnected) processButtonState();
  delay(5);
}
