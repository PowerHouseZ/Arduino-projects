int LEDPin=8;
int buttonPin=12;
int greenPin=13;
int buttonRead;
int delayTime=250;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead);
delay(delayTime);

if(buttonRead==1){
  digitalWrite(LEDPin, HIGH);
  digitalWrite(greenPin, LOW);
}
if(buttonRead==0){
  digitalWrite(greenPin, HIGH);
  digitalWrite(LEDPin, LOW);
}
}
