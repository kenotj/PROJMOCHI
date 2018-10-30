/*
Player.c handles the player information

*/
#include "Player.h"

/* Create the player object */
Player *Player_Create() {
	Player *player; /* the new object we will return */

	/* allocate memory for the new object */
	player = (Player*)malloc(sizeof(Player));
	if (player == NULL)
	{
		return NULL; /* malloc can fail! */
	}

	player->playerCurrentPositionX = 0;
	player->playerCurrentPositionY = 0;

	return player;
}