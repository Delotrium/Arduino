# Description

## Basic Use
This circuit is made to replicate a traffic light. The circuit turns a green LED on and the prints "GO" onto the LCD display, this then counts down from 15 seconds until the light
goes red. When the timer reachers zero, the green LED turns off and then red LED turns on, and the LCD then prints "Stop". This lasts for three seconds in which the code repeats. This
code is easy to implemtent as a DIY traffic light, and has multiple uses.

## Board and Circuit Setup and Part List
![Circuit Setup](https://i.ibb.co/gZhyWsH/ard2.png)
#### LCD Display
* GRND &#8594; Potentiometer (Terminal Two)
* VCC &#8594; Positive
* VO &#8594; Potentiometer (Wiper)
* RS &#8594; Pin 12
* RW &#8594; Negative
* E &#8594; Pin 11
* DB4 &#8594; Pin 5
* DB5 &#8594; Pin 4
* DB6 &#8594; Pin 3
* DB7 &#8594; Pin 2
* LED &#8594; Resistor (220Ω) &#8594; Positive

#### RGB LED Connections
* (Red) Cathode &#8594; Resistor (220Ω) &#8594;GRND
* (Red) Positive &#8594; Pin 10
* (Green) Cathode &#8594; Resistor (220Ω) &#8594;GRND
* (Green) Positive &#8594; Pin 9
