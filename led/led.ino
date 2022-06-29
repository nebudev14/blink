const int redPin = 6;
const int bluePin = 5;

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);

}

void loop() {
  analogWrite(bluePin, 15);
  for(int i = 0; i < 255; i++) {
    analogWrite(redPin, i);
    delay(10);
  }

//  digitalWrite(bluePin, HIGH);

}
