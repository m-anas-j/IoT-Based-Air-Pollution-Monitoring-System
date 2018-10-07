

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(12,11, 5, 4, 3, 2); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

void setup()

{

  // set up the LCD's number of columns and rows:

lcd.begin(16, 2);

}

 

void loop()

{

// set the cursor to column 0, line 1

lcd.print("   CIRCUIT DIGEST");//print name

lcd.setCursor(0, 1); // set the cursor to column 0, line 2

lcd.print("www.circuitdigest.com");//print name

delay(750);//delay of 0.75sec

lcd.scrollDisplayLeft();//shifting data on LCD

lcd.setCursor(0, 0);// set the cursor to column 0, line1

}
