/*
 ServoPot: Controlling a servo motor using a potentiometer (variable resistor)
 Reads an analog input on pin A0 and moves a VEX 393 2-wire motor with a Motor Controller 29.
 With the sketch uploaded, open the serial monitor to see the values. (Tools -> Serial Monitor) (Ctrl + Shift + M)
 This example code is in the public domain.
 */

#include <Servo.h>
Servo myservo;                          // create servo object to control a servo 
// Constants: Constants won’t change. They’re used here to set pin numbers: 
int potpin = A0;                        // analog pin used to connect the potentiometer

                                       // the servo is assigned to pin (6) in the Setup
              
// Variables: variables will change:
int val;                              // variable to read the value from the analog pin
 
void setup() 

{ 
  myservo.attach(6);                   // attaches the servo on pin 6 to the servo object 
  Serial.begin(9600);                  // initialize serial communication at 9600 bits per second
} 

void loop() 
{ 
val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
val = map(val, 0, 1023, 40, 130);     // scale it to use it with the servo (value between 0 and 180) 
myservo.write(val);                  // sets the servo position according to the scaled value
Serial.println(val);                 // print out the value between 0 and 180 
delay(150);                           // waits for the servo to get there 
}
