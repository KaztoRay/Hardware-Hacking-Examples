#include <stdio.h>
#include <wiringPi.h>

#define POWER 0
#define GLITCH_SEC_DEFAULT 300

int init() {

    pinMode(POWER, OUTPUT);
    digitalWrite(POWER, HIGH);

}

void goGlitch(int tick) {

    digitalWrite(POWER, LOW);

    for (int i = 0; i < tick; i++) {

        __asm__ __volatile__ ("nop");

    }

    digitalWrite(POWER, HIGH);

}

int main() {

    unsigned int volatile glitchsec = GLITCH_SEC_DEFAULT;

    if (wiringPiSetup() == -1) {

        return -1;

    }

    init();

    goGlitch(glitchsec);

    return 0;

}