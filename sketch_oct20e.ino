#include <LiquidCrystal.h>

#define RS 12
#define E 11


LiquidCrystal lcd(RS, E, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
 /* lcd.setCursor(6,0);
  lcd.print("Hello!");
  for(int k=0; k<3; k++);{
    lcd.scrollDisplayRight();
    delay(500);
  }
  lcd.clear();
  */
  static int x= 0;
  
  lcd.clear();
  lcd.setCursor(6+x, 0);
  lcd.print("Hello");
  delay(500);
  x=++x%3;
}
