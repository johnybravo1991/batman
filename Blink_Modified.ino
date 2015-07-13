/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(19200);
  pinMode(led, OUTPUT);     
  digitalWrite(led,LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  if(Serial.available()>0)
  {
    int r=Serial.read()-48;// ascii to number conversion
    Serial.println(r);
    if(r==1)
    {
        digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    }
    
    else
    {
        digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    }
  }
  

  delay(100);               // wait for a second


}
