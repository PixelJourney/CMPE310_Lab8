
# CMPE 310 - Lab 8

## Overview
This lab demonstrates two Arduino applications:
- Task 1: Continuity detection
- Task 2: DC voltage measurement using the Arduino ADC and an I2C LCD

## Task 1: Continuity Detection
**File:** `Task1Continuity.ino`

The Arduino is used to test electrical continuity between two points using two probe wires.

- Closed circuit: LED turns ON
- Open circuit: LED remains OFF

## Task 2: DC Voltage Measurement

The Arduino uses two analog input pins to measure the voltage difference across an electrical component.

### Arduino Pins
- A0: Positive measurement probe
- A1: Negative measurement probe
- SDA/SCL: I2C LCD communication

### Voltage Calculation
The Arduino converts the difference between ADC readings into volts using:

`Voltage = (A0_reading - A1_reading) * (5.0 / 1023.0)`

The measured voltage is displayed on the 16x2 LCD.

## Experimental Results

| Component | Measured Voltage |
|-----------|------------------|
| 330 Ohm Resistor | 2.30 V |
| LED | 2.29 V |
| Entire Circuit | ~4.50 V |

## Observations
The voltage measurements were obtained using two Arduino analog inputs and displayed on the LCD.

During testing, the A1 input showed a recurring offset of approximately 66 ADC counts when connected through the breadboard.
## Repository Files
- `Task1Continuity.ino` - Continuity detection
- `Task2Case1LED.ino` - LED voltage measurement
- `Task2Case2Resistor.ino` - Resistor voltage measurement
- `README.md` - Project documentation
