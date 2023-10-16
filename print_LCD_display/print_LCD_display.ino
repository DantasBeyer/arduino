#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(20,2);
  lcd.print("Print on");
  lcd.setCursor(0,1);
  lcd.print("LCD Display");

}
void loop()
{
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(1500);

}
