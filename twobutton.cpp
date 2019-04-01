#include "Arduino.h"

int led_red_pin = 11;

void setup()
{
	pinMode(led_red_pin, OUTPUT);
}

void loop()
{
	digitalWrite(led_red_pin, HIGH);
}
