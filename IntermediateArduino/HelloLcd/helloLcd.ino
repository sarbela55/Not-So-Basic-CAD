#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2); 
int button = 0;

void setup()   {
	lcd.init();
	lcd.backlight();
	lcd.setCursor(0,0);
	lcd.print("hello big zo");
}
void loop(){
if(button = 1){
lcd.setCursor(0,1);
lcd.print("button presses: 1");
}
if(button = 2){
lcd.setCursor(0,2);
lcd.print("button presses: 2");
}
}