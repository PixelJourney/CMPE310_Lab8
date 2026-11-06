const int prop1 = 4;
const int led = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(prop1,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool conn = digitalRead(prop1) == LOW;
  if (conn == true) {
      digitalWrite(led,HIGH);
  } else {
      digitalWrite(led,LOW);
  }
}
