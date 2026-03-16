
void setup() {
  Serial.begin(9600);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}



void loop() {
  digitalWrite(D5, HIGH);
  delay(300);
  digitalWrite(D6, HIGH);
  delay(300);
  digitalWrite(D7, HIGH);
  delay(300);
  digitalWrite(D5, LOW);
  delay(300);
  digitalWrite(D6, LOW);
  delay(300);
  digitalWrite(D7, LOW);
  delay(300);
}
