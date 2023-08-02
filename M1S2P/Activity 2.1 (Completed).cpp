// Define the button and LED pin numbers
const uint8_t BTN_PIN = 2;
const uint8_t LED_PIN = 13;

// Store the previous state of the button and the current state of the LED
uint8_t buttonPrevState = LOW;
uint8_t ledState = LOW;

// Set up the initial configuration of the Arduino board
void setup()
{
  // Set the button pin as an input with a pull-up resistor enabled
  pinMode(BTN_PIN, INPUT_PULLUP);
  
  // Set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  
  // Initialize the serial communication at a baud rate of 9600
  Serial.begin(9600);
}

// The main loop of the Arduino program
void loop()
{
  // Read the current state of the button
  uint8_t buttonState = digitalRead(BTN_PIN);
  
  // Print the button state, previous button state, and LED state to the serial monitor
  Serial.print(buttonState);
  Serial.print(buttonPrevState);
  Serial.print(ledState);
  Serial.println("");
  
  // If the button state is different from the previous button state (for exa,ple if the button is different as in pressed or released)
  if(buttonState != buttonPrevState)
  {
    // Toggle the state of the LED
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }
  
  // Update the previous button state for the next iteration
  buttonPrevState = buttonState;
  
  // Adds delay to the LED glowing (How long it takes to glow)
  delay(500);
}
