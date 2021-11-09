# Description
This code is a program that can be used as a life jacket. The code takes the input of the light using a photoresistor. When the value of the photoresistor is below the threshold a
LED will strobe (simulating a night environment where the LED is used so others can locate the life-jacket), but while the value is above the threshold the buzzer will turn on, as the light 
will not need to be on (simulating a day envirnment where the light cannot be used).

## Circuit Setup

![Circuit Image](https://i.ibb.co/g9nQ7Ts/arduinopic.png)
#### Circuit Setup 

* RGB Red &#8594; Pin 11
* RGB Cathode &#8594; 220Ω Resistor &#8594; GRND
* RGB Blue &#8594; Pin 10
* RGB Green &#8594; Pin 9

* Light Resistor Terminal 1 &#8594; 220Ω Resistor &#8594; GRND
* Light Resistor Terminal 1 &#8594; Pin A0
* Light Resistor Terminal 2 &#8594; Positive (5V)

* Piezo Positive &#8594; Pin 8
* Piezo Negative &#8594; GRND
