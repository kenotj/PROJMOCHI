/*
Handle loading and managing the level

*/

#include "LevelHandler.h"

LevelMap* Level_Loader() {
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

void Load_Map(LevelMap* levelmap) {
	FILE *fptr;
	char c;
	int x, y;
	
	errno_t err = fopen_s(&fptr, "SOURCE/ART/MOCHI_ASSET_DigipenLogo_V02.txt", "r");

	if (!err) {
		/* Scan and load from txt file */
		/* Load the x axis */
		for (x = 0; x < 300; ++x) {
			/* Load the y axis*/
			for (y = 0; y < 300; ++y) {
				if(fscanf_s(fptr, "%c", &c, 1) != EOF)
					levelmap->dynamicLevelLayout[x][y] = c;
			}
		}
	}
	else {
		printf("Loading Error!\n");
	}

	Sleep(3600);
	system("cls");
}