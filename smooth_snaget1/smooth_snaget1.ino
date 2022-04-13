// C++ code
//
/*
void setup()
{
  Serial.begin(9600);
    Serial.println(" powered on");


}

void loop()
{
 
  Serial.println("hello world");
  delay(1000); 
}
*/
// the setup function runs once when you press reset or power the board

int ledPin = 13;  // LED connected to digital pin 13
int inPin = 8;    // pushbutton connected to digital pin 7
int val = 0;      // variable to store the read value

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the digital pin 13 as output
  pinMode(inPin, INPUT);    // sets the digital pin 7 as input
}

void loop() {
  val = digitalRead(inPin);   // read the input pin
  digitalWrite(ledPin, val);  // sets the LED to the button's value
}