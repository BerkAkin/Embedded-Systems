#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 #define potans A0 
 int deger = 0;
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup()
{
    Serial.begin(9600);
lcd.init();
lcd.backlight();
}
 
void loop()
{
  deger = analogRead(potans); 
  Serial.println(deger); 
  delay(100);
  lcd.setCursor(0,0);
  lcd.print(deger);
  delay(50);
  lcd.clear();

}