/* Programmer: Daniel Clark
 *  Date: 11.6.19
 *  Program: Blink
 *  
 *  This program will turn on an LED for specified amounts of time, turn it 
 *  off, and back on in a While Loop
 *  
 *  Update: 11.22.19
 *  Program: Update Blink to allow my LED to Fade
 */

// initialize our led to Pin 9
int led = 9;        // the pin that the LED is attached to on the Arduino Board
int brightness = 0; // how bright the LED is
int fadeAmount = 5; //how many points to fade the LED

void setup() {
  // Using the Function pinmode to call the variable led and provide Output
  pinMode(led, OUTPUT);
}

void loop() {
  // set the brightness of pin9 (LED)
  analogWrite(led, brightness); 

  //change the brightness for the next time through the loop
  brightness = brightness + fadeAmount;

  //reverse the direction of the fading at the end of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
  
}                                                                                                 
