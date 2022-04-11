/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
#define LED_BUILTIN 26
const int pin_button = 14;
//int LED_BUILTIN = 13; // would not work
//const int timer = 100;
// pulldown connects it to 0V and pullup connects it to 3.3V internally


void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // intialize D14 as an input pin
  // pinMode(pin_button, INPUT); // floating voltage
  pinMode(pin_button, INPUT_PULLDOWN);
}

void loop()
{
  // // turn the LED on (HIGH is the voltage level)
  // digitalWrite(LED_BUILTIN, HIGH);
  // // wait for a second
  // delay(timer);
  // // turn the LED off by making the voltage LOW
  // digitalWrite(LED_BUILTIN, LOW);
  //  // wait for a second
  // delay(timer);

  // look at status of button
  // if high: LED goes 
  // else if low: LED goes low
  int button_value = digitalRead(pin_button);
  if (button_value == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  }

  else{
    digitalWrite(LED_BUILTIN, LOW);
  }

}
