int LED = 3;
int PIR = 2;
int Buzzer = 7;
int pwm =10;
int in_1=9;
int in_2=8;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(pwm,OUTPUT) ;   
  pinMode(in_1,OUTPUT) ; 
  pinMode(in_2,OUTPUT) ;
}

void loop() {
  int value = digitalRead(PIR);
  if (value == HIGH){
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(in_1,HIGH) ;
    digitalWrite(in_2,LOW) ;
    analogWrite(pwm,150) ;
  }
  else {
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
    digitalWrite(in_1,HIGH) ;
    digitalWrite(in_2,HIGH) ;
  }
}
