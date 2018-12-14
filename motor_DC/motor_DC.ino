int pwmPin = 9;
int in1 = 2;
int in2 = 3;

void setup() {
  pinMode(pwmPin,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
}

void loop() {
  //Sentido horário
  int in1State = HIGH;
  int in2State = LOW;
  digitalWrite(in1, in1State);
  digitalWrite(in2, in2State);
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(pwmPin, fadeValue);
    delay(100);
  }

  //Sentido anti-horário
  in1State = LOW;
  in2State = HIGH;
  digitalWrite(in1, in1State);
  digitalWrite(in2, in2State);
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(pwmPin, fadeValue);
    delay(100);
  }
}
