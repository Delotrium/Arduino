
#define RedLed 10
#define GreenLed 9
int i = 15;
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(RedLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
  // set the cursor to column 0, line 1
  digitalWrite(GreenLed, HIGH);
  lcd.setCursor(0, 0);
  lcd.print("Go");
  LightCount();
  
}

void LightCount() {
  delay(15000);
  digitalWrite(GreenLed, LOW);
  delay(10);
  digitalWrite(RedLed, HIGH);
  lcd.clear();
  lcd.print("Stop");
  delay(3000);
  lcd.clear();
  digitalWrite(RedLed, LOW);
}

 
