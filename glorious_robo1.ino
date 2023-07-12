// C++ code
//
int red=3;
void setup()
{
  pinMode(red, OUTPUT);
}

void loop()
{
  analogWrite(red,0);
  delay(500);
  analogWrite(red,33);
  delay(500);
  analogWrite(red,65);
  delay(500);
  analogWrite(red,128);
  delay(500);
  analogWrite(red,255);
  delay(500);
  
}