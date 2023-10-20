#define LAYOUT_SPANISH
#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("https://twitter.com/intent/tweet?url=https%3A//youtu.be/tTfn5Zir8OM%3Fsi%3D3DddLg5gFFEm8ONj&text=Black%20Hole%20-%20John%20Pollon%20%28Nightcore%29&via=YouTube&related=YouTube,YouTubeTrends,YTCreators");
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("https://youtu.be/tTfn5Zir8OM?si=3DddLg5gFFEm8ONj");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_T);
  DigiKeyboard.delay(1000);
  for (int i = 0; i < 5; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_UP);
    DigiKeyboard.delay(200);
  }

  DigiKeyboard.delay(1000);
}

void loop()
{
}
