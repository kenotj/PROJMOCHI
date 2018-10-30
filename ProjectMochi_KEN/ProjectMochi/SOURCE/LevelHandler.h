#pragma once
#define MAX_GAME_MAP_HEIGHT 300
#define MAX_GAME_MAP_WIDTH 300
#include "stdafx.h"

typedef struct {
	/* Level of the map */
	int level;
	/* 800x600 map */
	/* Handle the dynamic level map */
	char dynamicLevelLayout[MAX_GAME_MAP_HEIGHT][MAX_GAME_MAP_WIDTH];
	/* Handle the static level map */
	/* Feed dynamic level layout with previous position covered by Mochi or Kimchis */
	char staticLevelLayout[MAX_GAME_MAP_HEIGHT][MAX_GAME_MAP_WIDTH];
}LevelMap;

