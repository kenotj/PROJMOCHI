/******************************************************************************/
/*!
\file   LevelHandler.c
\author Project Mochi
\par    Course: GAM100
\brief
		GameState: 3
		Handling the map functions in the game.
*/
/******************************************************************************/
#include "LevelHandler.h"

LevelMap *Level_Create() {
	LevelMap *levelMap; /* the new object we will return */

	/* allocate memory for the new object */
	levelMap = (LevelMap*)malloc(sizeof(LevelMap));
	if (levelMap == NULL)
	{
		return NULL; /* malloc can fail! */
	}

	levelMap->dynamicLevelLayout[0][0] = 0;
	levelMap->staticLevelLayout[0][0] = 0;
	levelMap->level = 1;
	return levelMap;
}

/* Initialize the level */
void Init_Level(Player *player, LevelMap *levelMap) {
	HandleLevel(player, levelMap);
}

/* TODO: HANDLE DIFFERENT LEVEL HERE */
void HandleLevel(Player *player, LevelMap *levelMap) {
	Load_Map(player, levelMap);
}

/* Loading the map from .txt file */
void Load_Map(Player *player, LevelMap *levelMap) {
	FILE *fptr;
	char c;
	int x, y;
	
	errno_t err = fopen_s(&fptr, "SOURCE/LEVELS/mochi_level_1.txt", "r");

	if (!err) {
		/* Scan and load from txt file */
		/* Scan the y axis */
		for (y = 0; y < 29; ++y) {
			/* Scan the x axis */
			for (x = 0; x < 121; ++x) {
				if (fscanf_s(fptr, "%c", &c, 1) != EOF) {
					if (c == 'S') {
						player->playerCurrentPositionX = x;
						player->playerCurrentPositionY = y;
					}
					levelMap->dynamicLevelLayout[x][y] = c;
					levelMap->staticLevelLayout[x][y] = c;
				}
			}
		}
		fclose(fptr);
		/* Print the map once the map is loaded properly */
		Print_Map(levelMap);
	}
	else {
		printf("Loading Error!\n");
	}
}

/* Printing the map onto the game */
void Print_Map(LevelMap *levelMap) {
	int x, y;
	/*Load the y axis*/
	for (y = 0; y < 29; ++y) {
		/* Load the x axis */
		for (x = 0; x < 121; ++x) {
			printf_s("%c", levelMap->dynamicLevelLayout[x][y]); 
		}
	}
}

void Update_Level(LevelMap *levelMap) {
	WindowsHelper_SetCursorPosition(0,0);
	Print_Map(levelMap);
}
