/*
  Arduino Morse Code
  Claire Roush
  claireroush@gmail.com

  A simple program for the Arduino UNO that will translate an english phrase into
  morse code blinks, and display the code via the built in LED. 
  
*/
#include <Arduino.h>

//setup, runs once
void setup() {
  // init build in LED as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
   String str = "Bye";
   phraseParse(str);
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

//flashes the LED in a 'dot' pattern. Short, staccato. 
void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(150);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

//flashes the LED in a 'dash' pattern. Longer.
void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(850);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

//This function is passed a phrase and iterates through to display each letter's morse code
void phraseParse(String str){
  
  for(int i = 0; i<str.length(); i++) {
    char x = str[i];
    letterLookup(x); 
  }
}


//a function to lookup a letter and fire the LED according its morse code value
//Opted to do this with if/else statements rather than switch for simplicity's sake.
void letterLookup(char letter){
  if(letter == 'A' || letter == 'a'){
    dot();
    dash();
  }
  else if(letter == 'B' || letter == 'b'){
    dash();
    dot();
    dot();
    dot(); 
  }
  else if(letter == 'C' || letter == 'c'){
    dash();
    dot();
    dash();
    dot();
  }
  else if(letter == 'D' || letter == 'd'){
    dash();
    dot();
    dot();
  }
  else if(letter == 'E' || letter == 'e'){
    dot();
  }
  else if(letter == 'F' || letter == 'f'){
    dot();
    dot();
    dash();
    dot();
  }
  else if(letter == 'G' || letter == 'g'){
    dash();
    dash();
    dot();
  }
  else if(letter == 'H' || letter == 'h'){
    dot();
    dot();
    dot();
    dot();
  }
  else if(letter == 'I' || letter == 'i'){
    dot();
    dot();
  }
   else if(letter == 'J' || letter == 'j'){
    dot();
    dash();
    dash();
    dash();
  }
  else if(letter == 'K' || letter == 'k'){
    dash();
    dot();
    dash();
  }
  else if(letter == 'L' || letter == 'l'){
    dot();
    dash();
    dot();
    dot();
  }
  else if(letter == 'M' || letter == 'm'){
    dash();
    dash();
  }
  else if(letter == 'N' || letter == 'n'){
    dash();
    dot();
  }
  else if(letter == 'O' || letter == 'o'){
    dash();
    dash();
    dash();
  }
  else if(letter == 'P' || letter == 'p'){
    dot();
    dash();
    dash();
    dot();
  }
  else if(letter == 'Q' || letter == 'q'){
    dash();
    dash();
    dot();
    dash();
  }
  else if(letter == 'R' || letter == 'r'){
    dot();
    dash();
    dot();
  }
  else if(letter == 'S' || letter == 's'){
    dot();
    dot();
    dot();
  }
  else if(letter == 'T' || letter == 't'){
    dash();
  }
  else if(letter == 'U' || letter == 'u'){
    dot();
    dot();
    dash();
  }
  else if(letter == 'V' || letter == 'v'){
    dot();
    dot();
    dot();
    dash();
  }
  else if(letter == 'W' || letter == 'w'){
    dot();
    dash();
    dash();
  }
  else if(letter == 'X' || letter == 'x'){
    dash();
    dot();
    dot();
    dash();
  }
  else if(letter == 'Y' || letter == 'y'){
    dash();
    dot();
    dash();
    dash();
  }
  else if(letter == 'Z' || letter == 'z'){
    dash();
    dash();
    dot();
    dot();
  }
  //if none of these, low voltage. Sort of an error message (no LED).
  else{
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000); 
  }
}

