// C++ code
//
int mo = 0;

void setup()
{
  pinMode(8, INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  
  delay(1000);
  mo = digitalRead(8);
  Serial.println(mo);
  if(mo == 0){
    digitalWrite(4,HIGH);}
  else{digitalWrite(4,LOW);}
  
}