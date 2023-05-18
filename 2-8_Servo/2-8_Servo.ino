#include <Servo.h>
int lightVal;
int lightPin=A4;
int servoPin=9;
int redPin=13;
int servoPos=165;
int delayTime=250;
int angle;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin, INPUT);
pinMode(servoPin, OUTPUT);
pinMode(redPin,OUTPUT);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(delayTime);
angle=(-16./63.)*lightVal+16.*780./63.;
myServo.write(angle);

if(lightVal <= 100 ){
digitalWrite(redPin,HIGH);
}
if(lightVal >= 200){
digitalWrite(redPin,LOW);
}

}
