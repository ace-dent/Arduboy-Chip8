#include <Arduboy2.h>
#include <arduino.h>
#include "src/testrom.h"
#include "src/Chip8Emulator.h"
#include "src/Chip8Input.h"
#include "src/debugmodule.h"
#include "src/config.h"

Arduboy2 System;

Chip8Emulator Chip8;
#if DEBUG_MODE
  DebugModule Debug = DebugModule(Chip8);
#else
  Chip8Input Input = Chip8Input(Chip8);
#endif

void setup()
{
  System.begin();
  System.clear();
  System.setFrameRate(60);

  BeepPin1::begin();

  Chip8.Load(TestRom);
}

void loop()
{
  if (!(System.nextFrame()))
    return;
  System.pollButtons();

  Chip8.UpdateDelayTimer();
  Chip8.UpdateSoundTimer();
  Chip8.ClearInput();

  #if DEBUG_MODE
    Debug.Tick(System);
    Debug.Draw(System);
  #else
    Input.Tick(System);
  #endif

  Chip8.Tick(System, 50);
  System.display();
}
