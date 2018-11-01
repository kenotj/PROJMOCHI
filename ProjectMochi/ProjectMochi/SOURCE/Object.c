/******************************************************************************/
/*!
\file   Object.c
\author Project Mochi
\par    Course: GAM100
\brief
		GameState: 3
		Handling the objects variables in the game. Include the physics mechanics
		of the game.
*/
/******************************************************************************/
#include "Object.h"

/* Do a check if the object encounted is a collidable */
/* Return 1 if yes, 0 if no */
int Collider_Check(char item) {
	int i = 0;
	/* Store the char that are collidable */
	char c[20] = { '#', '|', '+', 'l' };

	/* Run through the loop and check whether the item is collidable */
	for (i = 0; i < 20; ++i) {
		if (item == c[i]) {
			return 1;
		}
	}

	return 0;
}