
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};

void setup() {
  lcd.begin(16,2);
  lcd.createChar(3, armsDown);
  lcd.createChar(4, armsUp);


  lcd.setCursor(0, 0);

}

void loop() {
  // read the potentiometer on A0:
  int sensorReading = analogRead(A0);
  // map the result to 200 - 1000:
  int delayTime = map(sensorReading, 0, 1023, 200, 1000);

 for (int i = 0; i <= 15; i++) {
    if (i % 2 == 0) {
      lcd.setCursor(i, 0);
      lcd.write(3);
      delay(1000);
       lcd.clear();
    }
    else if (i % 2 != 0) {
      lcd.setCursor(i, 0);
      
      lcd.write(4);
     
      delay(1000);
       lcd.clear();}}

    
    for (int i = 15; i>= 0; i--) {
      if (i % 2 == 0) {
        lcd.setCursor(i, 1);
        lcd.write(4);
        delay(1000);
         lcd.clear();
      }
      else if (i % 2 != 0) {
        lcd.setCursor(i, 1);
        lcd.write(3);
       
        delay(1000);
         lcd.clear();

      

    }
    }}
