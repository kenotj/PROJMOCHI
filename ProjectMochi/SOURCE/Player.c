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
	player->health = 300;
	player->model = 64;
	player->previous_position = ' ';
	return player;
}

/* Create the Enemy object */
Enemy *enemy_Create() {
	Enemy *enemy; /* the new object we will return */

	/* allocate memory for the new object */
	enemy = (Enemy*)malloc(sizeof(Enemy));
	if (enemy == NULL)
	{
		return NULL; /* malloc can fail! */
	}

	enemy->enemyCurrentPositionX = 0;
	enemy->enemyCurrentPositionY = 0;
	enemy->health = 1;
	enemy->model = 60;
	return enemy;
}