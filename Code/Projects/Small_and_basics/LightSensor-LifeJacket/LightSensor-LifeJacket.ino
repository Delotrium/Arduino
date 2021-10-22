#define THRESHOLD 200

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void PinStrobe(int pin, int time);

void loop()
{
  
  int LightValue = analogRead(A0);
  light(LightValue);
  Serial.print(LightValue);
  Serial.print("\n");
}


void PinStrobe(int pin, int time)
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
  if(Value <= THRESHOLD) {
 	 PinStrobe(11,1000);
    digitalWrite(8, LOW);
  }
  else {
    digitalWrite(8, HIGH);
    digitalWrite(11, LOW);  // turn off LED
    digitalWrite(10, LOW);  // turn off LED
    digitalWrite(9, LOW);  // turn off LED
  }
}
