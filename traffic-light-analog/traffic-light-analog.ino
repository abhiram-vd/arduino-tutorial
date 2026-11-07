const int RED = 3;
const int YELLOW = 6;
const int GREEN = 9;
const int START_VALUE = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogWrite(RED, START_VALUE);
  analogWrite(YELLOW, 0);
  analogWrite(GREEN, 0);

  for(int i = 1; i <= 5; i++){
    delay(1000);
    analogWrite(RED, START_VALUE + 50 * i);
  }

  analogWrite(RED, 0);
  analogWrite(GREEN, START_VALUE);

  for(int i = 1; i <= 5; i++){
    delay(1000);
    analogWrite(GREEN, START_VALUE + 50 * i);
  }

  analogWrite(GREEN, 0);
  analogWrite(YELLOW,  START_VALUE);

  for(int i = 1; i <= 2; i++){
    delay(1000);
    analogWrite(YELLOW, START_VALUE + 100 * i);
  }
}
