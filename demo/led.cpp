#include "mbed.h"

void Led(DigitalOut& ledpin, int times)
{
    for (int i = 0; i <  2*times; ++i) {
        ledpin = !ledpin;
        wait(0.2f);
    }
}