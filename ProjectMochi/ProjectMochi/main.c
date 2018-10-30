/************************************************
Main game function here


*************************************************/
#include "SOURCE/stdafx.h" /* Hold the library that we need */
#include "SOURCE/Graphics.h" /* Handle the game graphics */
#include "SOURCE/GameState.h" /* Handle the game state */
#include "SOURCE/GameStateInit.h" /* Initialize the game state*/
#include "SOURCE/Player.h"
#include "SOURCE/InputHandler.h"

int main() 
{
	/* Initialize and set up the game */
	Initialize_Window();
	GameState* gameState;
	gameState = InitializeGameState();
	Player *player;
	player = Player_Create();
	
	/* Print DigiPen Logo */
	Print_DigiPenLogo();	

	/* Keep the game running when isRunning is true */
	while (gameState->isRunning) {

		/* Detect Player keypress */
		if (kbhit()) 
		{
			/* TODO: Handle the command by the player */
			char c = getch();
			HandleInput(player, c);
		}

		/* TODO: What to do here? hmmmm */


	}
	
	/* Clean up and exit*/
	return 0;
}