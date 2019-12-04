/* Programmer: Daniel Clark
   Date: 12/3/9
   Program: Potentiometer

   AnalogReadSerial
   Reads an analog input on pin A0, prints to the serial monitor
   
*/

void setup() {
  // initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0
  int potentiometerValue = analogRead(A0);

  //  print the value of our potentiometer
  Serial.println(potentiometerValue);

  //add a delay for stability
  delay(1);
  
}
