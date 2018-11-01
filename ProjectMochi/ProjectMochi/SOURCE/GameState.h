/******************************************************************************/
/*!
\file   GameState.h
\author Project Mochi
\par    Course: GAM100
\brief
		This file contain GameState functions and struct. Used for managing the
		gamestate of the game.
*/
/******************************************************************************/
#pragma once
#include "stdafx.h"
#include "Player.h"

/* The game state */
typedef struct GameState {

	/* Determine the state of the game */
	/* 1 -> DigiPen Logo */
	/* 2 -> Game Menu */
	/* 3 -> In Game */
	/* 4 -> Setting */
	/* 5 -> Credits */
	int currentGameState;
	int prevGameState;
	int nextGameState;

	/* Determine if the game is running*/
	bool isRunning;

}GameState;

GameState gameState;

/* bool Game_Update(Player *player, GameState *gameState); */