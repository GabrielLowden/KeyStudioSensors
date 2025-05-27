int redPin = 10;
int bluePin = 11;
int greenPin = 9;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (val=255; val > 0; val--) {
    analogWrite(10, val);
    analogWrite(11, 255 - val);
    analogWrite(9, 128 - val);
    delay(1);
  }

  for (val = 0; val < 255; val++) {
    analogWrite(10, val);
    analogWrite(11, 255 - val);
    analogWrite(9, 128 - val);
    delay(1);
  }
}
