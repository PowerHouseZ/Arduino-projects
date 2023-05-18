int redLED=2;
int num1=500;
int num2=100;
int num3=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  

  digitalWrite(redLED, HIGH);
  delay(num1);
  digitalWrite(redLED, LOW);
  delay(num1);

  digitalWrite(redLED, HIGH);
  delay(num1);
  digitalWrite(redLED, LOW);
  delay(num1);

  digitalWrite(redLED, HIGH);
  delay(num1);
  digitalWrite(redLED, LOW);
  delay(num1);

  digitalWrite(redLED, HIGH);
  delay(num2);
  digitalWrite(redLED, LOW);
  delay(num2);

  digitalWrite(redLED, HIGH);
  delay(num2);
  digitalWrite(redLED, LOW);
  delay(num2);

  digitalWrite(redLED, HIGH);
  delay(num2);
  digitalWrite(redLED, LOW);
  delay(num2);

  digitalWrite(redLED, HIGH);
  delay(num1);
  digitalWrite(redLED, LOW);
  delay(num1);

  delay(num3);

}
