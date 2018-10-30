/*
InputHandler.c contains functions to handle the input by the player

*/
#include "InputHandler.h"
#include "Player.h"



/* Handle the input for the player */
void ProcessInput(Player *player) {
	if (kbhit())
	{
		char c = getch();
		HandleInput(player, c);
	}
}

void HandleInput(Player *player, char c) {
	if (c == 'w' || c == 'a' || c == 's' || c == 'd')
		Player_HandleMovement(player, c);
}

/* Handle the movement of the character */
void Player_HandleMovement(Player *player, char input) {

	if (input == 'd') {
		/* TODO: Handle the movement of the character to the right */

		player->playerCurrentPositionX += 1;
	}
	if (input == 'a') {
		/* TODO: Handle the movement of the character to the left */

		player->playerCurrentPositionX -= 1;
	}
	if (input == 'w') {
		/* TODO: Handle the movement of the character upwards */

		player->playerCurrentPositionY -= 1;
	}
	if (input == 's') {
		/* TODO: Handle the movement of the character downwards */

		player->playerCurrentPositionY += 1;
	}
}
