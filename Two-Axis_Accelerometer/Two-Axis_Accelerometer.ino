/*
  Memsic2125 - Read the Memsic 2125 two-axis accelerometer. Pulses output by the 2125 into milli-g’s 
  (1/1000) of earth’s gravity) and prints them over the serial connection to the computer.
  http://www.arduino.cc/en/Tutorial/Memsic2125
   created 6 Nov 2008 by David A. Mellis modified 30 Aug 2011 by Tom Igoe
  This example code is in the public domain.
 */

// Constants: Constants won’t change. They’re used here to set the pin numbers: 
const int xPin = 9;                           // X output of the accelerometer
const int yPin = 10;                        // Y output of the accelerometer

// Variables: Variables will change. They’re used do assign variable names:
                                      // the variables are defined in the loop below in this example
// Setup: The setup routine runs once when you start or press reset:         
void setup() {
  Serial.begin(9600);                          // initialize serial communications:
  pinMode(xPin, INPUT);               // initialize the pins connected to the accelerometer as inputs:
  pinMode(yPin, INPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

// Loop: The loop routine runs over and over again forever:
void loop() {
  int pulseX, pulseY;                       // variables to read the pulse widths:
  int accelerationX, accelerationY;       // variables to contain the resulting accelerations

  pulseX = pulseIn(xPin,HIGH);            // read pulse from x- and y-axes:
  pulseY = pulseIn(yPin,HIGH);
  // convert the pulse width into acceleration
  // accelerationX and accelerationY are in milli-g’s 
  // earth’s gravity is 1000 milli-g's, or 1g
  accelerationX = ((pulseX / 10) - 500) * 8;
  accelerationY = ((pulseY / 10) - 500) * 8;

  Serial.print(accelerationX);            // print the acceleration
  Serial.print("\t");                       // print a tab character:
  Serial.print(accelerationY);
  Serial.println();
  if(accelerationX < 0){digitalWrite(6,LOW);} else{digitalWrite(6,HIGH);}
  if(accelerationX > 40){digitalWrite(5,LOW);}  else{digitalWrite(5,HIGH);}
  if(accelerationY < -20){digitalWrite(4,LOW);} else{digitalWrite(4,HIGH);}
  if(accelerationY > 20){digitalWrite(3,LOW);}  else{digitalWrite(3,HIGH);}

  delay(100);
 }
