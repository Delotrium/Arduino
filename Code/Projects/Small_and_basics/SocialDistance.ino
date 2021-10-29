#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
#define Buzzer 13 //Attach Red LED to pin 13

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
void Sensor(); //Declare Sensor function

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(Buzzer,OUTPUT); // Set the LEDs as outputs
  Serial.begin(9600);
}

void loop() {
  Sensor(); //Loop the Sensor function
}

void Sensor() {
  digitalWrite(Buzzer, LOW);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //Send a ultrasonic pulse out
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); //Recieve duration of pulse
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  Serial.println(distance); //Print distance to serial foor debug
  while (distance < 150) {
    digitalWrite(Buzzer, HIGH);
    delay(20);
    break;
  }
  while (distance > 150) {
  	digitalWrite(Buzzer, LOW);
    delay(20);
    break;
  }
}
