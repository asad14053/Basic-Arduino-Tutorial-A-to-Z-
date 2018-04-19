int LED = 3;
int PIR = 2;
int Buzzer = 7;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  int value = digitalRead(PIR);
  if (value == HIGH){
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
  }
}
