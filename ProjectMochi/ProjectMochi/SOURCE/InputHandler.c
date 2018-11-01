/******************************************************************************/
/*!
\file   InputHandler.c
\author Project Mochi
\par    Course: GAM100
\brief
		This file will handle the input keyed in by the user. Diverting the
		necessary command to the appropriate functions.
*/
/******************************************************************************/
#include "InputHandler.h"

/* Handle the input for the player */
void ProcessInput(Player *player, LevelMap *levelMap) {
	if (kbhit())
	{
		char c = getch();
		HandleInput(player, levelMap, c);
	}
}

void HandleInput(Player *player, LevelMap *levelMap, char c) {
	if (c == 'w' || c == 'a' || c == 's' || c == 'd')
		Player_HandleMovement(player, levelMap, c);
}

