int potPin=A3;
int potVal;
float ledVal;
int delayTime=250;
int greenPin=13;
int redPin=12;
int yellowPin=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(greenPin, OUTPUT);
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
ledVal=(255./1023.) * potVal;
analogWrite(greenPin,ledVal);
analogWrite(redPin,ledVal);
analogWrite(yellowPin,ledVal);
Serial.println(ledVal);

}
