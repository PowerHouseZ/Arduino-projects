int numBlinks;
int j;
int blinkTime=500;
int delayQuestion=5000;
int greenPin=13;
int redPin=12;
int yellowPin=11;
int bluePin=10;
String msg="How many blinks do you want? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);

while(Serial.available()==0);{
}

numBlinks=Serial.parseInt();
for(j=1;j<=numBlinks;j=j+1){
digitalWrite(greenPin,HIGH);
digitalWrite(redPin,HIGH);
digitalWrite(yellowPin,HIGH);
digitalWrite(bluePin,HIGH);
delay(blinkTime);
digitalWrite(greenPin,LOW);
digitalWrite(redPin,LOW);
digitalWrite(yellowPin,LOW);
digitalWrite(bluePin,LOW);
delay(blinkTime);
}
}



