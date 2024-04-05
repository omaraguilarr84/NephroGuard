int solenoid = 9;
int floatSensor = 8;
int buttonState;

void setup() {
  Serial.begin(9600);
  pinMode(floatSensor, INPUT);
  pinMode(solenoid, OUTPUT);

}

void loop() {
  buttonState = digitalRead(floatSensor);
  
  if (buttonState == HIGH)
  {
    Serial.println("Water Level - HGIH");
    delay(1000); // CV logic
    digitalWrite(solenoid, HIGH);
    delay(1000);
  }
  else
  {
    Serial.println("Water Level - LOW");
  }

  delay(1000);
}
