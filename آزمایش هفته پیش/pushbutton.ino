int buttonPin = 0;
int ledpin = 8;
int buttonstate ;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate = digitalRead(buttonPin);
  if (buttonstate == HIGH) {
    digitalWrite(ledpin, HIGH);
  }
  else {
    digitalWrite(ledpin, LOW);
  }
}
