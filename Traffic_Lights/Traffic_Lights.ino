//traffic light pins
int redLed = 5;
int yellowLed = 4;
int greenLed = 3;

//Infrared sensor pins
const int sensorPin = 7;
int sensorState = 0; //variable for reading sensor status

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read sensor status
  sensorState = digitalRead(sensorPin);

  //traffic light changing logic
  if (sensorState == HIGH) {
    digitalWrite(greenLed, HIGH);
    delay(5000);
    
  }
  else {
    digitalWrite(redLed, HIGH);
  }
  delay(1000);


  /* generic traffic light sequence for referenc
  digitalWrite(greenLed, HIGH);
  delay(3000);
  digitalWrite(greenLed, LOW);
  for (int i = 0; i < 3; i++) {
    delay(500);
    digitalWrite(yellowLed, HIGH);
    delay(500);
    digitalWrite(yellowLed, LOW);
  }
  delay(500);
  digitalWrite(redLed, HIGH);
  delay(5000);
  digitalWrite(redLed, LOW);
  */
}
