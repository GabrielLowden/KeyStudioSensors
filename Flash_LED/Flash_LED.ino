int led = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); //set pin3 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); //turns on led
  delay(2000);
  digitalWrite(led, LOW); //turn off led
  delay(2000);

}
