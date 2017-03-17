/*
ProTrinketKeyboard example
For Pro Trinket (ATmega328 based Trinket) by Adafruit Industries
Please use library TrinketKeyboard for the ATtiny85 based Trinket
Version 1.0  2015-01-01 Initial Version derived from TrinketKeyBoardExample  Mike Barela
*/

#include <ProTrinketKeyboard.h>  // Ensure the library is installed

// Switches are connected from ground to these defined pins
const int PIN_BUTTON_CAPITAL_B = 3;
const int PIN_BUTTON_CAPITAL_K = 4;
const int PIN_BUTTON_CAPITAL_S = 5;
const int PIN_BUTTON_CAPITAL_W = 6;


void setup(){
  // Declare button pins as inputs
  pinMode(PIN_BUTTON_CAPITAL_B, INPUT);
  pinMode(PIN_BUTTON_CAPITAL_K, INPUT);
  pinMode(PIN_BUTTON_CAPITAL_S, INPUT);
  pinMode(PIN_BUTTON_CAPITAL_W, INPUT);

  // setting input pins to high means turning on internal pull-up resistors
  digitalWrite(PIN_BUTTON_CAPITAL_B, HIGH);
  digitalWrite(PIN_BUTTON_CAPITAL_K, HIGH);
  digitalWrite(PIN_BUTTON_CAPITAL_S, HIGH);
  digitalWrite(PIN_BUTTON_CAPITAL_W, HIGH);
  // remember, the buttons are active-low, they read LOW when they are not pressed

  // start USB stuff
  TrinketKeyboard.begin();
}

void loop(){
  TrinketKeyboard.poll();
  // the poll function must be called at least once every 10 ms
  // or cause a keystroke
  // if it is not, then the computer may think that the device
  // has stopped working, and give errors

  if (digitalRead(PIN_BUTTON_CAPITAL_B) == LOW){
    TrinketKeyboard.pressKey(0, KEYCODE_B);
    delay(500);
    // this should type a capital A
    TrinketKeyboard.pressKey(0, 0);
    // this releases the key
  }

    if (digitalRead(PIN_BUTTON_CAPITAL_K) == LOW){
    TrinketKeyboard.pressKey(0, KEYCODE_K);
    delay(500);
    // this should type a capital A
    TrinketKeyboard.pressKey(0, 0);
    // this releases the key
  }

    if (digitalRead(PIN_BUTTON_CAPITAL_S) == LOW){
    TrinketKeyboard.pressKey(0, KEYCODE_S);
    delay(500);
    // this should type a capital A
    TrinketKeyboard.pressKey(0, 0);
    // this releases the key
  }

    if (digitalRead(PIN_BUTTON_CAPITAL_W) == LOW){
    TrinketKeyboard.pressKey(0, KEYCODE_W);
    delay(500);
    // this should type a capital A
    TrinketKeyboard.pressKey(0, 0);
    // this releases the key
  }
}
