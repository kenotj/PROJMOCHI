/******************************************************************************/
/*!
\file   GameStateManager.c
\author Project Mochi
\par    Course: GAM100
\brief
		Handling the state of the game. Making sure that the game state 
		transition properly.
*/
/******************************************************************************/
#include "GameStateManager.h"
#include "GameState.h"
#include "WindowsHelper.h"
#include "Graphics.h"

void Init_GameState() {
	gameState.isRunning = true;
	gameState.currentGameState = 0;
	gameState.prevGameState = gameState.currentGameState;
	gameState.nextGameState = 1;
}

void GameState_Update(int nextGameState) {
	gameState.nextGameState = nextGameState;
}

void GameState_Check(Player *player, LevelMap *levelMap) {
	/* UPDATE THE CURRENT GAME STATE */
	if (gameState.nextGameState != gameState.currentGameState) {
		gameState.prevGameState = gameState.currentGameState;
		gameState.currentGameState = gameState.nextGameState;
		GameState_Switch(player, levelMap);
	}
}

void GameState_Switch(Player *player, LevelMap *levelMap) {
	WindowsHelper_ClearScreen();
	switch (gameState.currentGameState) {
		/* DigiPen Logo*/
		case 1:
			Print_DigiPenLogo();
			break;
		/* Game Menu */
		case 2:
			break;
		/* In Game */
		case 3:
			Init_Level(player, levelMap);
			break;
		/* Settings */
		case 4:
			break;
		/* Credits */
		case 5:
			break;
		default:
			break;
	}
}
