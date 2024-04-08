#include <SPI.h>

int slaveSelect = 2;

int miso = 12;
int mosi = 13;
int sclk = 14;
int cs = 15;

int delayTime = 50;

void setup() {
    pinMode(slaveSelect, OUTPUT);
    SPI.begin();
    SPI.setBitOrder(LSBFIRST);
}

void loop() {
    for (int i; i < 256; i++) {
        digitalWrite(slaveSelect, LOW);
        SPI.transfer(i);
        digitalWrite(slaveSelect, HIGH);
        delay(delayTime);
    }
}