int pushButton = 2;             // digital pin 2 has a pushbutton attached to it. Give it a name:
void setup()
{
  Serial.begin(9600);              // initialize serial communication at 9600 bits per second:
  pinMode(pushButton, INPUT);                       // make the pushbutton's pin an input:
}
void loop()
{
  int buttonState = digitalRead(pushButton);                       // read the input pin:
  Serial.println(buttonState);                        // print out the state of the button:

  delay(1);                                         // delay in between reads for stability
}

