/*************

*********/

#pragma once
#include "stdafx.h"

/* The game state */
typedef struct GameState {

	/* Determine the state of the game */
	/* 1 -> Game Menu */
	/* 2 -> In Game */
	/* 3 -> Setting */
	/* 4 -> Credits */
	int currentGameState;
		
	/* Determine if the game is running*/
	bool isRunning;

}GameState;

GameState* GameState_Create();

bool Game_Update(Player *player, GameState *gameState);