/****************************************************
Initialize the game state

*****************************************************/

#include "GameStateInit.h"
#include "GameState.h"

GameState *InitializeGameState() 
{
	GameState *initGameState; /* We will return this */
	
	initGameState = GameState_Create(); 


	return initGameState;
}
