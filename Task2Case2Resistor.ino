
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int voltageV = A0;
int probe = A1;

void setup() {
    pinMode(voltageV, INPUT);
    lcd.init();
    lcd.clear();
    lcd.backlight();
}

void loop() {
    int voltageMeasure = analogRead(voltageV);
    int probeMeasure = analogRead(probe);

    lcd.setCursor(3, 0);
    lcd.print("Resistor");

    lcd.setCursor(0, 1);
    lcd.print("Measured: ");
    lcd.print((voltageMeasure - probeMeasure) * (5.0/1023));
}