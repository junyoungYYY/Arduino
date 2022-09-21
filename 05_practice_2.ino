void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
}

void loop() {
  digitalWrite(7, LOW);
  delay(1000);
  for(int i = 0; i<5; i++){
    digitalWrite(7, HIGH);
    delay(300);
    digitalWrite(7, LOW);
    delay(300);
  }
  digitalWrite(7, HIGH);
  while(1){
  }
}
