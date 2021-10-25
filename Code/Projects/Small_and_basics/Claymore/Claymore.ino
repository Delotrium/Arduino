

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int i = 9; 
String nums[] = {"1","2","3","4","5","6","7","8","9"};

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600); //Setup Serial for debug
  Serial.write("Initialised");
  pinMode(13, OUTPUT); //Initialise pin 13 to be output
}

void loop() {
  while (i > 0) { //While i is less than 0
    lcd.setCursor(0, 0); //Select the top right cursor
  	lcd.print(nums[i-1]); //Print assosiated number from nums[] (note -1 as lists start from [0])
	Serial.write(i); //Print associated number on LCD
    delay(1000); //Wait 1 Second
    i--; //Subtract 1 from i each iteration
  }
  if (i == 0) { //When i reaches 0
    lcd.setCursor(0, 0);
  	lcd.print("BOOM!"); //Print "BOOM!" from LCD
    PinStrobe(13); //Strobe the LED connected to Pin 13
  }
}

void PinStrobe(int pin) //Creates stobe effect for LED on pin 'pin'
{
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100); 
  digitalWrite(pin, HIGH);
  delay(100); 
  digitalWrite(pin, LOW);
  delay(500); 
}
