#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

void Led(DigitalOut& ledpin, int times);

int main()
{
    redLED = 1;
    greenLED = 1;
    while (true) {
        Led(redLED, 3);
        Led(greenLED, 2);
    }
}

