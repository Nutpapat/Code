#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

#define I2C_ADDR 0x3F // <
#define BACKLIGHT_PIN 3

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {8,7,6,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {4,3,2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
LiquidCrystal_I2C lcd(I2C_ADDR,2,1,0,4,5,6,7);

int count = 0;

void setup()
{
lcd.begin (16,2); // <
  
lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
Serial.begin(9600);
}

void loop()
{
  char key = keypad.getKey();

  if (key != NO_KEY){
    lcd.print(key);
    Serial.println(key);
    count++;
  }
  if(count == 16){
    lcd.setCursor(0, 1);
    }
  if(count == 32){
    delay(500);
    lcd.clear();
    count = 0;
  }
}
