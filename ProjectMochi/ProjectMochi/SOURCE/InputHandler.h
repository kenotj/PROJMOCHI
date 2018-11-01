/******************************************************************************/
/*!
\file   InputHandler.h
\author Project Mochi
\par    Course: GAM100
\brief
		InputHandler.c header file
*/
/******************************************************************************/
#pragma once
#include "stdafx.h"
#include "Player.h"
#include "PlayerMovement.h"
#include "GameState.h"
#include "GameStateManager.h"

void ProcessInput(Player* player, LevelMap* levelMap);
void HandleInput(Player* player, LevelMap* levelMap, char c);
