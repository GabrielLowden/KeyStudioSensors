#include <Wire.h>
#include <LiquidCrystal_I2C.h>


//adding a display
LiquidCrystal_I2C lcd(0x27, 16, 2);

//setting up variables for the photocell sensor
int sensorPin = A0;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  //If you want baud instead of lcd uncomment line below
  //Serial.begin(9600);

  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(sensorPin);
  lcd.setCursor(0,0);
  lcd.print("Photocell");
  lcd.setCursor(0,1);
  lcd.print(val);

  //serial print line below
  //Serial.println(val, DEC);
  delay(200);
}
