int buzzPin=3;
int potVal;
int potPin=A1;
int toneVal;
float V2;
int delayTime=250;
int greenPin=11;
int redPin=13;
int yellowPin=12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
V2=(5./1023.)*potVal;

potVal=analogRead(potPin);
toneVal=(9940./1023.)*potVal+60;

Serial.print("Potentiometer Voltage is ");
Serial.println(V2);

if(V2<3.0){
  digitalWrite(greenPin,HIGH);
}
if(V2 >= 3.0){
  digitalWrite(greenPin,LOW);
}
delay(delayTime);

if(V2 >=4 ){
digitalWrite(yellowPin,HIGH);
}
if(V2 >= 5.0){
digitalWrite(yellowPin,LOW);
}
if(V2 >= 5.0){
digitalWrite(redPin,HIGH);
digitalWrite(buzzPin,HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzzPin,LOW);
delayMicroseconds(toneVal);
}
if(V2 < 5.0){
digitalWrite(redPin,LOW);
}
delay(delayTime);
}
