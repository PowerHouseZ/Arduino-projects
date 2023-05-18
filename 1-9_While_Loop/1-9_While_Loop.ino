int potVal;
int potPin=A3;
int greenPin=13;
int redPin=12;
int yellowPin=11;
int waitTime=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potVal, INPUT);
pinMode(greenPin, OUTPUT);
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 potVal=analogRead(potPin);
 Serial.println(potVal);
 delay(waitTime);

while(potVal>1000){
  digitalWrite(redPin,HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(waitTime);
}
digitalWrite(redPin,LOW);

while(potVal>=500){
  digitalWrite(yellowPin,HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(waitTime);
}
digitalWrite(yellowPin,LOW);

while(potVal<=500){
  digitalWrite(greenPin,HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(waitTime);
}
digitalWrite(greenPin,LOW);

}

