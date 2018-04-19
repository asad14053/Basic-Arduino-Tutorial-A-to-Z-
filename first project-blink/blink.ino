void setup()       //the setup function runs once when you press reset or power the board.
{
   pinMode(3, OUTPUT);                         // initialize digital pin 3 as an output.
}
void loop()                         // the loop function runs over and over again forever.
{
  digitalWrite(3, HIGH);                // turn the LED on (HIGH is the voltage level).
  
  delay(1000);                                                       // wait for a second. 
  
  digitalWrite(3, LOW);                    // turn the LED off by making the voltage LOW.
  
  delay(1000);  
}                                                     
