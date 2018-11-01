/******************************************************************************/
/*!
\file   PlayerMovement.c
\author Project Mochi
\par    Course: GAM100
\brief
		Handle the movement of the player around the map.
*/
/******************************************************************************/
#include "PlayerMovement.h"

/* Handle the movement of the character */
void Player_HandleMovement(Player *player, LevelMap *levelMap, char input) {

	if (input == 'd') {
		/* TODO: Handle the movement of the character to the right */
		Update_PlayerPosition(player, levelMap, 1, 0);
	}
	if (input == 'a') {
		/* TODO: Handle the movement of the character to the left */
		Update_PlayerPosition(player, levelMap, -1, 0);
	}
	if (input == 'w') {
		/* TODO: Handle the movement of the character upwards */
		Update_PlayerPosition(player, levelMap, 0, -1);
	}
	if (input == 's') {
		/* TODO: Handle the movement of the character downwards */
		Update_PlayerPosition(player, levelMap, 0, 1);
	}

	Update_Level(levelMap);
}

void Update_PlayerPosition(Player *player, LevelMap *levelMap, int x, int y) {
	if (x == 0) {
		int newY = player->playerCurrentPositionY + y;
		char check = levelMap->dynamicLevelLayout[player->playerCurrentPositionX][newY];
		if (!Collider_Check(check)) {
			levelMap->dynamicLevelLayout[player->playerCurrentPositionX][player->playerCurrentPositionY] = ' ';
			levelMap->dynamicLevelLayout[player->playerCurrentPositionX][newY] = player->model;
			player->playerCurrentPositionY += y;
		}
	}
	else if(y == 0){
		int newX = player->playerCurrentPositionX + x;
		char check = levelMap->dynamicLevelLayout[newX][player->playerCurrentPositionY];
		if (!Collider_Check(check)) {
			levelMap->dynamicLevelLayout[player->playerCurrentPositionX][player->playerCurrentPositionY] = ' ';
			levelMap->dynamicLevelLayout[newX][player->playerCurrentPositionY] = player->model;
			player->playerCurrentPositionX += x;
		}
	}
}