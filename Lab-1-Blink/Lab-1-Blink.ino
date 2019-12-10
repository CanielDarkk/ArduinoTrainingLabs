/* Programmer: Daniel Clark
   Date: 12.3.9
   Program: LED & Potentiometer

   Read analog port and turn on LED at a determined threshold

*/

const int analogPin = A0;
const int ledPin = 13;
float threshold = 2.25;

void setup() {
  //initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0
  int potentiometerValue = analogRead(A0);

  //Convert the analog read from 0 - 1023 to 0 - 5 volts
  float voltage = potentiometerValue * (5.0 / 1023.0);

  //  print the value of our potentiometer
  Serial.println(voltage);

  // if the analog value is high than threshold variable it will turn on the LED
  if (voltage > threshold) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  //add a delay for stability
  delay(1);
  
}
