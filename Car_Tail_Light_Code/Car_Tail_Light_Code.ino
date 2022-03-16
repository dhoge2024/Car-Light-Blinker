int greenLED = 13;
int yellowLED = 12;
int yellowLED2 = 11;
int greenLED2 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(yellowLED2, OUTPUT);
  pinMode(greenLED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH);
  delay(250);
  digitalWrite(yellowLED, HIGH);
  delay(250);
  digitalWrite(yellowLED2, HIGH);
  delay(250);
  digitalWrite(greenLED2, HIGH);
  delay(250);
  delay(250);                  
  digitalWrite(greenLED, LOW);    
  digitalWrite(yellowLED, LOW);
  digitalWrite(yellowLED2, LOW);
  digitalWrite(greenLED2, LOW);
  delay(250);
}
