int greenPin=13;
int greenBlink=4;
int greenTime=500;
int redPin=12;
int redBlink=5;
int redTime=500;
int yellowPin=11;
int yellowBlink=3;
int yellowTime=500;
int waitTime=1000;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(greenPin, OUTPUT);
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=yellowBlink;j=j+1){
  digitalWrite(yellowPin, HIGH);
  delay(yellowTime);  
  digitalWrite(yellowPin, LOW);
  delay(yellowTime);  
  }
  for(j=1;j<=greenBlink;j=j+1){
  digitalWrite(greenPin, HIGH);
  delay(greenTime);  
  digitalWrite(greenPin, LOW);
  delay(greenTime);  
  }
  for(j=1;j<=redBlink;j=j+1){
  digitalWrite(redPin, HIGH);
  delay(redTime);  
  digitalWrite(redPin, LOW);
  delay(redTime);  
  }

  



  
}
