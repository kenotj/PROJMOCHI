/*************************


*************************/
#include "GameState.h"
#include "Player.h"

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

bool Game_Update(Player *player, GameState *gameState)
{
	WindowsHelper_SetCursorPosition(player->playerCurrentPositionX, player->playerCurrentPositionY);
	printf("%c", player->previous_position);
	ProcessInput(player);
	WindowsHelper_SetCursorPosition(player->playerCurrentPositionX, player->playerCurrentPositionY);
	/*find character of map using new x,y & store in char prev_pos*/
	printf("%c", player->model);

	return gameState;
}