void setup() {
  pinMode(1, OUTPUT);
}

void loop() { 
  digitalWrite(1, HIGH);
  delay(420);
  digitalWrite(1, LOW);
  delay(420);
}
