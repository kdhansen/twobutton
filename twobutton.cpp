#include "Arduino.h"

int led_red_pin = 11;
int button_1_pin = 3;

void setup()
{
	pinMode(led_red_pin, OUTPUT);
  pinMode(button_1_pin, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(button_1_pin) == LOW) {
	  digitalWrite(led_red_pin, HIGH);
  } else {
    digitalWrite(led_red_pin, LOW);
  }
}
