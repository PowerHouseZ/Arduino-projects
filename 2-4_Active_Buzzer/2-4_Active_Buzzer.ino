int buzzPin=3;
int readVoltPin=A5;
int readVal;
float V2;
int delayTime=250;
int delayBuzz=3000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readVoltPin, INPUT);
pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Potentiometer Voltage is ");
Serial.println(V2);

readVal=analogRead(readVoltPin);
V2=(5./1023.)*readVal;

if(V2<3.0){
  digitalWrite(buzzPin,HIGH);
}
if(V2 >= 3.0 || V2 >=4){
  digitalWrite(buzzPin,LOW);
}
if(V2 >= 3.0 || V2 >=4 ){
digitalWrite(buzzPin,HIGH);
}
if(V2 >= 5.0){
digitalWrite(buzzPin,LOW);
}
if(V2 >= 5.0){
digitalWrite(buzzPin,HIGH);
}
if(V2 < 5.0){
digitalWrite(buzzPin,LOW);
}
delay(delayBuzz);
}
