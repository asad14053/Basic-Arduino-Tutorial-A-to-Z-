const int pwm = 10 ;
const int in_1 = 9 ;
const int in_2 = 8 ;  
void setup()
{
pinMode(pwm,OUTPUT) ;    
pinMode(in_1,OUTPUT) ;  
pinMode(in_2,OUTPUT) ;
}
void loop()
{
digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,LOW) ;
analogWrite(pwm,255) ;    //Clockwise for 3 secs
delay(3000) ;     

digitalWrite(in_1,LOW) ;
digitalWrite(in_2,HIGH) ;
delay(3000) ; //Anti-Clockwise for 3 secs
}

