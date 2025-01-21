#define key1 digitalRead(A0)

void setup() {
  randomSeed(analogRead(A0));
  pinMode(A0, INPUT);
  for (int i = 0; i <= 5; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}


void loop() {
  if (key1 == 0) {
    int randum = random(1, 7);
    Serial.println(randum);
    digitalWrite(randum-1, HIGH);
    delay(1000);
    digitalWrite(randum-1, LOW);
    delay(1000);
  }
}
