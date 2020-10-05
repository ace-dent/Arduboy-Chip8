#pragma once
#include "Games/15PUZZLE.h"
#include "Games/BLINKY.h"
#include "Games/BLITZ.h"
#include "Games/BRIX.h"
#include "Games/CONNECT4.h"
#include "Games/GUESS.h"
#include "Games/HIDDEN.h"
#include "Games/IBM.h"
#include "Games/INVADERS.h"
#include "Games/KALEID.h"
#include "Games/MAZE.h"
#include "Games/MERLIN.h"
#include "Games/MISSILE.h"
#include "Games/PONG.h"
#include "Games/PONG2.h"
#include "Games/PUZZLE.h"
#include "Games/SYZYGY.h"
#include "Games/TANK.h"
#include "Games/TESTOPCD.h"
#include "Games/TETRIS.h"
#include "Games/TETRIS.h"
#include "Games/TICTAC.h"
#include "Games/UFO.h"
#include "Games/VBRIX.h"
#include "Games/VERS.h"
#include "Games/WIPEOFF.h"

struct GameEntry
{
  char Name[8];
  uint8_t* Data;
};

static PROGMEM const GameEntry GameList[] =
{
    { FifteenPuzzleName, FifteenPuzzleData },
    { BlinkyName, BlinkyData },
    { BlitzName, BlitzData },
    { BrixName, BrixData },
    { Connect4Name, Connect4Data },
};