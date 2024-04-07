int analogPin = A2;
int buttonState;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int sensorVal = analogRead(analogPin);
  float voltage = sensorVal * (5.0 / 1023.0);
  if (voltage > 0.2)
  {
    buttonState = HIGH;
  }
  else
  {
    buttonState = LOW;
  }
  Serial.println(buttonState);
  delay(500);
}
