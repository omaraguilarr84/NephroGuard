int floatSensor = 8;
int buttonState = 1;

void setup() {
  Serial.begin(9600);
  pinMode(floatSensor, INPUT_PULLUP);

}

void loop() {
  if (buttonState == LOW)
  {
    Serial.println("Water Level - HIGH");
  }
  else
  {
    Serial.println("Water Level - LOW");
  }
}
