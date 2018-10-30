/*************************


*************************/
#include "GameState.h"

/* Create an empty game state object */
GameState* GameState_Create()
{
	GameState* gameState; /* the new object we will return */

	/* allocate memory for the new object */
	gameState = (GameState*)malloc(sizeof(GameState));
	if (gameState == NULL)
	{
		return NULL; /* malloc can fail! */
	}

	/* assign empty values to all members */
	gameState->isRunning = true;
	gameState->currentGameState = 1;

	/* return the new object */
	return gameState;
}