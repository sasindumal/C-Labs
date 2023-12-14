int ledPin = 2; 
int inPin = 1; 
int val = 0; 
void setup()
{
pinMode(ledPin, OUTPUT); 
pinMode(inPin, INPUT); 
}
void loop()
{
val = digitalRead(inPin); 

if (val == LOW){
digitalWrite(ledPin, HIGH); 
}
else{
digitalWrite(ledPin, LOW); 
}
}
