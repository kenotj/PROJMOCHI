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

	/* extra variables*/
	int health;
	char model;

	/* object in previous character position */
	char previous_position;

}Player;

/* Create the player */
Player* Player_Create();

typedef struct {
	/* Determine the enemy current position */
	int enemyCurrentPositionX;
	int enemyCurrentPositionY;

	/* Determine the enemy size 1x1 3x3 5x5 */
	/* Depend on enemy size and what to print */
	int enemySize;

	/* extra variables[Enemies need enemyID and Patrol path]*/
	int health;
	char model;

	/* object in previous character position */
	char previous_position;

}Enemy;

/* Create the enemy */
Enemy* enemy_Create();