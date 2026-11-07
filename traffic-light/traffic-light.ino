const int RED = 2;
const int YELLOW = 4;
const int GREEN = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);

  delay(5000);

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);

  delay(5000);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW,  HIGH);

  delay(2000);
}
