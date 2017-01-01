/*
  Arduino Morse Code
  Claire Roush
  claireroush@gmail.com

  A simple program for the Arduino UNO that will (soon) translate an english phrase into
  morse code blinks, and display the code via the built in LED. 
  
*/

//setup, runs once
void setup() {
  // init build in LED as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
   dot();
   dot();
   dot();
                     
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(150);
  digitalWrite(LED_BUILTIN, LOW);
  delay(75);
}


