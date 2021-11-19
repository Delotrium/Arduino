# Description

## Basic Use
This circuit was made to replicate a claymore, which is a time-detonation explosive device. When the code is initiated, the LCD will countdown from nine and will decrease value 
every second. When the timer reaches zero, the LCD then prints “BOOM!” to symbolise the exploding of the device. Furthermore, when the timer reaches zero and LED strobes represent 
the explosion.

## Board and Circuit Setup and Part List
![Circuit Setup](https://i.ibb.co/3st06dD/arduino.png)
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
* Cathode &#8594; GRND
* Positive &#8594; Pin 13

