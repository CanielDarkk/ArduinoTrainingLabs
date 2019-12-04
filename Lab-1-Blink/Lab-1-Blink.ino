/* Programmer: Daniel Clark
    Date: 11.6.19
    Program: digitalRead() & the Serial Port

    Reads a digital input on pin2, prints the result to the serial monitor
*/

//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  // Using the Function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

  //initializes serial commmunication at 9600 bits per second
  Serial.begin(9600);
  //make the pushBotto pin an input
  pinMode(pushButton, INPUT);
}

void loop() {
  // read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button
  Serial.println(buttonState);
  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
  delay(1); // delay in between readings for stability

}
