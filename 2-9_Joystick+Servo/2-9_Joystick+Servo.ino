#include <Servo.h>
Servo myServo;

int Xpin=A0;
int Ypin=A1;
int Spin=2;
int Xval;
int Yval;
int lightPin=A4;
int servoPin=9;
int redPin=13;
int servoPos=165;
int Sval;
int buzzPin=7;
int writeValx;
int writeValy;
int delayTime=200;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
pinMode(Spin, INPUT);
pinMode(redPin,OUTPUT);
pinMode(servoPin, OUTPUT);
pinMode(buzzPin, OUTPUT);
digitalWrite(Spin, HIGH);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
writeValx=(180./1023.) *Xval;
Yval=analogRead(Ypin);
writeValy=(180./1023.) *Yval;
Yval=analogRead(Ypin);
Sval=digitalRead(Spin);

myServo.write(writeValx);
myServo.write(writeValy);

if (Sval==1){
  digitalWrite(redPin, HIGH);
}
else{
  digitalWrite(redPin,LOW);
}

if (Sval==0){
  digitalWrite(buzzPin, HIGH);
}
else{
  digitalWrite(buzzPin,LOW);
}

delay(delayTime);
Serial.print(" X Value = ");
Serial.print(Xval);
Serial.print(" Y Value = ");
Serial.print(Yval);
Serial.print(" Switch State is ");
Serial.println(Sval);
}
