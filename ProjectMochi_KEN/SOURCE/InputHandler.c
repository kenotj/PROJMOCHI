/*
InputHandler.c contains functions to handle the input by the player

*/
#include "InputHandler.h"


/* Handle the input for the player */
void HandleInput(Player *player, char c) {
	if (c == 'w' || c == 'a' || c == 's' || c == 'd')
		Player_HandleMovement(player, c);
}

/* Handle the movement of the character */
void Player_HandleMovement(Player *player, char input) {

	if (input == 'd') {
		/* TODO: Handle the movement of the character to the right */
		printf_s("%c", input);
		printf_s("%d", player->playerCurrentPositionX);
		player->playerCurrentPositionX += 1;
	}
	if (input == 'a') {
		/* TODO: Handle the movement of the character to the left */
		printf_s("%c", input);
		printf_s("%d", player->playerCurrentPositionX);
		player->playerCurrentPositionX -= 1;
	}	
	if (input == 'w') {
		/* TODO: Handle the movement of the character upwards */
		printf_s("%c", input);
		printf_s("%d", player->playerCurrentPositionY);
		player->playerCurrentPositionY -= 1;
	}	
	if (input == 's') {
		/* TODO: Handle the movement of the character downwards */
		printf_s("%c", input);
		printf_s("%d", player->playerCurrentPositionY);
		player->playerCurrentPositionY += 1;
	}
}
