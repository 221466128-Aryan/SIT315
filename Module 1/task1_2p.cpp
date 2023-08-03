// C++ code
//

const int motionPin = 2;
const int ledPin = 13;

volatile bool motionDetected = false;

void setup()
{
  pinMode(motionPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(motionPin), interrupt, CHANGE);
}

void loop()
{
}

void interrupt()
{
  if (digitalRead(motionPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
    motionDetected = true;
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion Detected!");
    motionDetected = false;
  }
}// C++ code
//

const int motionPin = 2;
const int ledPin = 13;

volatile bool motionDetected = false;

void setup()
{
  pinMode(motionPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(motionPin), interrupt, CHANGE);
}

void loop()
{
}

void interrupt()
{
  if (digitalRead(motionPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
    motionDetected = true;
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion Detected!");
    motionDetected = false;
  }
}