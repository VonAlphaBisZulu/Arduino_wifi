#include <Arduino.h>

const int pinD0 = 0;
const int pinD2 = 2;

void setup() {
    Serial.println("starting");
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(pinD0, OUTPUT);
    pinMode(pinD2, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
}

void loop() {
    /* delay(100);
    someFunction(pinD0, false);
    someFunction(pinD2, false);
    someFunction(LED_BUILTIN, false);
    delay(900);
    someFunction(pinD0, true);
    someFunction(pinD2, true);
    someFunction(LED_BUILTIN, true);
    Serial.println("lol");
    */
    analogWrite(A1, round(511.5 * (sin(millis()/20)+1)) );
    // delay(900);
    // Serial.println(round(511.5 * (sin(millis() / 20) + 1)));
}

void someFunction(int pin, bool state) {
    digitalWrite(pin, state);
}