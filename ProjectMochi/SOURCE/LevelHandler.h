#pragma once
#define MAX_GAME_MAP_HEIGHT 200
#define MAX_GAME_MAP_WIDTH 300
#include "stdafx.h"

typedef struct {
	/* Level of the map */
	int level;
	/* 800x600 map */
	/* Handle the dynamic level map */
	char dynamicLevelLayout[MAX_GAME_MAP_WIDTH][MAX_GAME_MAP_HEIGHT];
	/* Handle the static level map */
	/* Feed dynamic level layout with previous position covered by Mochi or Kimchis */
	char staticLevelLayout[MAX_GAME_MAP_WIDTH][MAX_GAME_MAP_HEIGHT];
}LevelMap;

LevelMap* Level_Create();
void Load_Map(LevelMap *levelMap);
void Print_Map(LevelMap *levelMap);


