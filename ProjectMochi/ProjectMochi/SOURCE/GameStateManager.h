/******************************************************************************/
/*!
\file   GameStateManager.h
\author Project Mochi
\par    Course: GAM100
\brief
		GameStateManager header file
*/
/******************************************************************************/
#pragma once
#include "stdafx.h"
#include "GameState.h"
#include "LevelHandler.h"

void Init_GameState();
void GameState_Update(int nextGameState);
void GameState_Check(Player *player, LevelMap *levelMap);
void GameState_Switch(Player *player, LevelMap *levelMap);