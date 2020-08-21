#include <Arduino.h>

void setup () {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    delay(100);
    someFunction(false);
    delay(1000);
    someFunction(true);
}

void someFunction(bool num) {
    digitalWrite(LED_BUILTIN, num);
}