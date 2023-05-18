int redPin=13;
int greenPin=12;
int bluePin=11;
String userColor;
String msg="What color do you want? (red, green, blue, cyan, magenta, yellow, sienna, fuchsia) ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){

}
userColor=Serial.readString();

if (userColor=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (userColor=="green"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (userColor=="blue"){
  digitalWrite(bluePin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
}

if (userColor=="cyan"){
  digitalWrite(redPin,0);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}

if (userColor=="magenta"){
  digitalWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
}

if (userColor=="yellow"){
  digitalWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,0);
}

if (userColor=="off"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (userColor=="sienna"){
  digitalWrite(redPin,160);
  analogWrite(greenPin,82);
  analogWrite(bluePin,45);
}

if (userColor=="fuchsia"){
  digitalWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
}





}
