#pragma once
#include "stdafx.h"

/* Player Structure */
typedef struct {
	/* Determine the player current position */
	int playerCurrentPositionX;
	int playerCurrentPositionY;

	/* Determine the player size 1x1 3x3 5x5 */
	/* Depend on player size and what to print */
	int playerSize;

	/* object in previous character position */
	char previous_position;

}Player;

/* Create the player */
Player* Player_Create();