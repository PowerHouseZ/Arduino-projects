int lightPin=A0;
int lightVal;
int delayVal=250;
int redPin=12;
int greenPin=13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin,INPUT);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(delayVal);

if(lightVal >= 200){
  digitalWrite(greenPin,HIGH);
}
if(lightVal <= 100){
  digitalWrite(greenPin,LOW);
}
if(lightVal <= 100 ){
digitalWrite(redPin,HIGH);
}
if(lightVal >= 200){
digitalWrite(redPin,LOW);
}
}
