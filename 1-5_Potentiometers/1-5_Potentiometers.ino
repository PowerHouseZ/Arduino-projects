int readVoltPin=A3;
int readVal;
float V2;
int delayTime=250;
int greenPin=13;
int redPin=12;
int yellowPin=11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readVoltPin, INPUT);
pinMode(greenPin, OUTPUT);
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(readVoltPin);
V2=(5./1023.)*readVal;

Serial.print("Potentiometer Voltage is ");
Serial.println(V2);

if(V2<3.0){
  digitalWrite(greenPin,HIGH);
}
if(V2 >= 3.0 || V2 >=4){
  digitalWrite(greenPin,LOW);
}
if(V2 >= 3.0 || V2 >=4 ){
digitalWrite(yellowPin,HIGH);
}
if(V2 >= 5.0){
digitalWrite(yellowPin,LOW);
}
if(V2 >= 5.0){
digitalWrite(redPin,HIGH);
}
if(V2 < 5.0){
digitalWrite(redPin,LOW);
}
delay(delayTime);
}
