int redPin=12;
int greenPin=13;
int bluePin=10;
String userColor;
String msg="What Color LED? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){

}
userColor=Serial.readString();

if(userColor=="red" || userColor=="Red" || userColor=="RED"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if(userColor=="green" || userColor=="Green" || userColor=="GREEN"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
}

if(userColor=="blue" || userColor=="Blue" || userColor=="BLUE"){
  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
}
}

