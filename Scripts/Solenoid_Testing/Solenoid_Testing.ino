const int transistorPin = 9; // Change this to the actual pin you're using

void setup() {
  pinMode(transistorPin, OUTPUT);
}

void loop() {
  // Turn on the solenoid valve
  digitalWrite(transistorPin, HIGH);
  delay(1000); // Adjust as needed
  
  // Turn off the solenoid valve
  digitalWrite(transistorPin, LOW);
  delay(1000); // Adjust as needed
}
