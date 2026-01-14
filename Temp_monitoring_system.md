**Description
This project implements a temperature monitoring system using the LM35 temperature sensor and Arduino Uno. 
The system measures temperature in Celsius and converts it into Fahrenheit and Kelvin, 
while an LED alert is triggered when the temperature exceeds a predefined threshold.

**Components Used
-Arduino UNO
-LM35 Temperature Sensor
-Breadboard
-Resistor(220ohm)
-LED
-Jumper Wires

**Circuit Connections
LM35 Sensor:
one side pin is connected to Vcc, other side pin connected to GND, and middle pin is connected to analog pin
LED:
short leg is connected to GND, long leg is connected to digital pin 7

**Working Principle
The LM35 sensor produces an analog voltage proportional to the surrounding temperature. Arduino reads this voltage, converts it into temperature values in Celsius,
Fahrenheit, and Kelvin, and displays them on the Serial Monitor.
When the temperature rises above 30°C, the LED starts blinking to indicate a high-temperature condition.

**Temperature Conversion Formula
Celsius = (Analog Value × 5 / 1023) ÷ 0.01
Fahrenheit = (Celsius × 9 / 5) + 32
Kelvin = Celsius + 273.15

This project is simulated using Tinkercad. Temperature values can be adjusted using the LM35 temperature slider to observe real-time output.

**Applications
-Temperature monitoring systems
-Overheat alert systems
-Embedded systems learning projects
