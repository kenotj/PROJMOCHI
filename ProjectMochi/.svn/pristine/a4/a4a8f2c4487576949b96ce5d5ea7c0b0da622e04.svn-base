/*
Handle loading and managing the level

*/

#include "LevelHandler.h"

LevelMap* Level_Create() {
	LevelMap* levelMap;

	/* allocate memory for the new object */
	levelMap = (LevelMap*)malloc(sizeof(LevelMap));
	if (levelMap == NULL)
	{
		return NULL; /* malloc can fail! */
	}

	/* assign empty values to all members */
	levelMap->level = 1;

	return levelMap;
}

void Load_Map(LevelMap* levelMap) {
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
				if (fscanf_s(fptr,"%c", &c, 1) != EOF)
					levelMap->dynamicLevelLayout[x][y] = c;
			}
		}
		fclose(fptr);
	}
	else {
		printf("Loading Error!\n");
	}
}
void Previous_Map_Update()
{

}

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