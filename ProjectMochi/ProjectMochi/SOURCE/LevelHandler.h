/******************************************************************************/
/*!
\file   LevelHandler.h
\author Project Mochi
\par    Course: GAM100
\brief
		LevelHandler.c header file
*/
/******************************************************************************/
#pragma once
#define MAX_GAME_MAP_HEIGHT 200
#define MAX_GAME_MAP_WIDTH 300
#include "stdafx.h"
#include "Player.h"
#include "WindowsHelper.h"

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

LevelMap *Level_Create();

/* Initialize the level */
void Init_Level(Player *player, LevelMap *levelMap);
/* Handle the level */
void HandleLevel(Player *player, LevelMap *levelMap);
/* Load the map from IO file */
void Load_Map(Player *player, LevelMap *levelMap);
/* Printing the map from the array */
void Print_Map(LevelMap *levelMap);

void Update_Level(LevelMap *levelMap);

