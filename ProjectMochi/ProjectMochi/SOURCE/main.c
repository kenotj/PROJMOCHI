/******************************************************************************/
/*!
\file   main.c
\author Project Mochi
\par    Course: GAM100
\brief
		Main function of the game. Keep the game running.
*/
/******************************************************************************/
#include "stdafx.h" /* Hold the library that we need */
#include "Graphics.h" /* Handle the game graphics */
#include "GameState.h" /* Handle the game state */
#include "GameStateManager.h" /* Initialize the game state*/
#include "Player.h"
#include "InputHandler.h"
#include "LevelHandler.h"

int main() 
{
	/* Initialize and set up the game */
	Initialize_Window();
	Init_GameState();
	LevelMap *levelMap;
	levelMap = Level_Create();
	Player *player;
	player = Player_Create();
	
	/* Keep the game running when isRunning is true */
	while (gameState.isRunning) {
		GameState_Check(player, levelMap);
		ProcessInput(player, levelMap);
	}
	
	/* Clean up and exit*/
	return 0;
}