#include <Arduino.h>
void setup() {
// write your initialization code here
    Serial.begin(38400);
    Serial1.begin(38400);
}

void loop() {
// write your code here
    if (Serial.available()) {
        Serial1.write(Serial.read());
    }
    if (Serial1.available()) {
        Serial.write(Serial1.read());
    }
    if (Serial1.available()) {
        Serial.write(Serial1.read());

    }
}