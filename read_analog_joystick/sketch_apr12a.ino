  int inPin = A0; 
  int inpinn = A1;
  int val = 0;
  int lr = 0;
  char rd = "A";

void setup() {
  // put your setup code here, to run once:
  delay(1000);
  Serial.begin(9600);
  Serial.println("powered on");
  pinMode(inPin, INPUT);    // sets the digital pin 7 as input
  pinMode(inpinn, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  val = analogRead(inPin);   // read the input pin
  //Serial.println(val);  // sets the LED to the button's value
  lr = analogRead(inpinn);   // read the input pin
  //Serial.println(lr);  // sets the LED to the button's value
  rd = Serial.read();
  Serial.println(rd);
  if rd = "o";
  {Serial.println("ok");}
}
