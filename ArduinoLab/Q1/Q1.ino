
void setup()
{
int i = 11;
pinMode(i, OUTPUT);
pinMode(i+1, OUTPUT);

}
void loop()
{
for(int i=11; i<=12; i++) 
{
digitalWrite(i, HIGH); 
delay(1000); 
digitalWrite(i, LOW); 
delay(1000); }
}
