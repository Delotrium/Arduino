#define THRESHOLD 200 //Defind the Light Threshold

void setup()
{
  pinMode(11, OUTPUT); //Initialise corresponding pins as an output
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT); //Set the light sensor as input
  Serial.begin(9600); //Initialise Serial
}

void loop()
{
  
  int LightValue = analogRead(A0); //Get the input of the light sensor in variable 'LightValue'
  light(LightValue); //Run light funtion wtih LightValue parameter
  Serial.print(LightValue); //Print LightValue in Serial
  Serial.print("\n"); //Print new line
}


void PinStrobe(int pin, int time) //Strobe Effect for LED with pin input, and time input
{
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100);
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(time); 
}

void light(int Value) {
  if(Value <= THRESHOLD) { //While the Vale is less than the defined threshold
 	 PinStrobe(11,1000); //Strobe pin 11, with 1 second delay
    digitalWrite(8, LOW); //Turn Buzzer Off
  }
  else {
    digitalWrite(8, HIGH); //Turn Buzzer One
    digitalWrite(11, LOW);  // turn off LED
    digitalWrite(10, LOW);  // turn off LED
    digitalWrite(9, LOW);  // turn off LED
  }
}
