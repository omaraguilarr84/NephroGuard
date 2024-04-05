int floatSensor = 9;
int buttonState;

void setup() {
  Serial.begin(9600);
  pinMode(floatSensor, INPUT);

}

void loop() {
  buttonState = digitalRead(floatSensor);
  
  if (buttonState == LOW)
  {
    Serial.println("Water Level - LOW");
  }
  else
  {
    Serial.println("Water Level - HIGH");
  }

  delay(1000);
}
