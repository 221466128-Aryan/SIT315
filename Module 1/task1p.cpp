// C++ code
//

const int motionPin = 2;
const int ledPin = 13;


void setup()
{
  pinMode(motionPin, INPUT); // Set motion sensor pin as input
  pinMode(ledPin, OUTPUT);         // Set LED pin as output
  Serial.begin(9600);
}

void loop()
{
  int motionValue = digitalRead(motionPin);
  if(motionValue != HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
  }
  else if(motionValue != LOW)
  {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion Detected!");
  }
  delay(500);
}