#include "Arduino.h"

int led_red_pin = 11;
int button_1_pin = 3;
int led_green_pin = 10;
int button_2_pin = 2;

void setup()
{
	pinMode(led_red_pin, OUTPUT);
  pinMode(button_1_pin, INPUT_PULLUP);
  pinMode(led_green_pin, OUTPUT);
  pinMode(button_2_pin, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(button_1_pin) == LOW) {
	  digitalWrite(led_red_pin, HIGH);
  } else {
    digitalWrite(led_red_pin, LOW);
  }
  if (digitalRead(button_2_pin) == LOW) {
	  digitalWrite(led_green_pin, HIGH);
  } else {
    digitalWrite(led_green_pin, LOW);
  }
}
