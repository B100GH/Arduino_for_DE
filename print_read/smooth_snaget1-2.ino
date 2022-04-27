// C++ code
//
void setup()
{
  pinMode(8, INPUT);
  Serial.begin(9600);

}

void loop()
{
  Serial.println(digitalRead(8));
  delay(10); // Delay a little bit to improve simulation performance
}