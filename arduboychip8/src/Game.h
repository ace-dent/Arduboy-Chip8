#pragma once

#include <Arduboy2.h>

#include "States.h"
#include "GameState.h"
#include "Chip8Emulator.h"
#include "System.h"

class Game
{
private:
	Arduboy2 arduboy;
	Chip8Emulator emulator;

	GameState gameState;

	MenuState menuState;
	EmulatorState emulatorState;

	ButtonSystem buttonSystem;

public:
	GameState getGameState() const
	{
		return this->gameState;
	}

	void setGameState(GameState gameState)
	{
		this->gameState = gameState;
	}

	Chip8Emulator & getEmulator()
	{
		return this->emulator;
	}

	ButtonSystem & getButtonSystem()
	{
		return this->buttonSystem;
	}

	Arduboy2 & getScreen()
	{
		return this->arduboy;
	}

public:
	void setup();
	void loop();
};