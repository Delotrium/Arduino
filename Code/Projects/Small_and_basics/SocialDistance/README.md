# Description
This code is a program that can be used as a life jacket. The code takes the input of the light using a photoresistor. When the value of the photoresistor is below the threshold a
LED will strobe (simulating a night environment where the LED is used so others can locate the life-jacket), but while the value is above the threshold the buzzer will turn on, as the light 
will not need to be on (simulating a day envirnment where the light cannot be used).

## Circuit Setup

![Circuit Image](https://i.ibb.co/CQGS1GS/Arduino2.png)
#### Circuit Setup and Part List
##### Piezo
* Piezo Positive &#8594; Pin 13
* Piezo Negative &#8594; Resistor 220ΤΩ &#8594; GRND

##### Ultrasonic
* VCC &#8594 Positive (5V)
* Trig &#8594 Pin 3
* Echo &#8594  Pin 2
* GRND &#8594 GRND
