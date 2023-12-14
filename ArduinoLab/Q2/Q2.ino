void setup()
{
for(int i=2; i<7; i++) 
{
pinMode(i, OUTPUT);
}
}
void loop()
{
  for(int i=2; i<7; i++)
  {
  digitalWrite(i, HIGH);
  delay(20);
  digitalWrite(i+1, HIGH);
  delay(20);
  digitalWrite(i+2, HIGH);
  delay(20);
  digitalWrite(i, LOW);
  delay(20);
  digitalWrite(i+1, LOW);
  }
  
  for(int i=7; i>2; i--)
  {
  digitalWrite(i, HIGH);
  delay(20);
  digitalWrite(i-1, HIGH);
  delay(20);
  digitalWrite(i-2, HIGH);
  delay(20);
  digitalWrite(i, LOW);
  delay(20);
  digitalWrite(i-1, LOW);
  }
}
