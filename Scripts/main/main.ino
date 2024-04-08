int solenoid = 9;
int floatSensor = A2;

void setup() {
  Serial.begin(9600);
  pinMode(solenoid, OUTPUT);

}

void loop() {
  int sensorVal = analogRead(floatSensor);
  float voltage = sensorVal * (5.0 / 1023.0);;
  
  if (voltage > 0.2)
  {
    Serial.println("Water Level - HIGH");
    delay(1000); // CV logic
    digitalWrite(solenoid, HIGH);
    delay(10000); // however long it takes to empty
    digitalWrite(solenoid, LOW);
  }
  else
  {
    Serial.println("Water Level - LOW");
  }

  delay(500);
}
