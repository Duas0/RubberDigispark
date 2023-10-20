#define LAYOUT_SPANISH
#include "DigiKeyboard.h"
#define delay1 1000
#define delay2 2000

void setup()
{
  DigiKeyboard.update();
  DigiKeyboard.delay(delay2);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(delay2);

  DigiKeyboard.println("https://twitter.com/intent/tweet?url=https%3A//youtu.be/tTfn5Zir8OM%3Fsi%3D3DddLg5gFFEm8ONj&text=Black%20Hole%20-%20John%20Pollon%20%28Nightcore%29&via=Digispark");
  DigiKeyboard.delay(delay2);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(delay2);

  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("https://youtu.be/tTfn5Zir8OM?si=3DddLg5gFFEm8ONj");

  DigiKeyboard.delay(delay2);
  DigiKeyboard.sendKeyStroke(KEY_T);
  DigiKeyboard.delay(delay1);
  for (int i = 0; i < 3; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_UP);
    DigiKeyboard.delay(delay1);
  }

  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("https://campusvirtual.unex.es/portal/");
  DigiKeyboard.delay(delay1);

  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("https://mail.google.com/mail/u/1/#inbox");
  DigiKeyboard.delay(delay1);

  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("https://web.whatsapp.com/");
  DigiKeyboard.delay(delay1);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(delay1);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("github");
  DigiKeyboard.delay(delay2);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("cd \\src");
  DigiKeyboard.delay(delay1);
  DigiKeyboard.println("code .");
}

void loop()
{
}
