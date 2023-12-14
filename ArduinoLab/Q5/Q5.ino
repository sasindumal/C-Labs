int inPin = 1; 
int ledPin=2; 
int val = 0;
void setup() 
{
pinMode(ledPin, OUTPUT); 
pinMode(inPin, INPUT);
}


void loop() {

val = digitalRead(inPin); 

if (val == HIGH){
digitalWrite(ledPin, HIGH); 

delay(500);

}else{
digitalWrite(ledPin, LOW); }

}
