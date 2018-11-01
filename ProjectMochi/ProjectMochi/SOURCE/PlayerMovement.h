/******************************************************************************/
/*!
\file   PlayerMovement.h
\author Project Mochi
\par    Course: GAM100
\brief
		PlayerMovement.c header file
*/
/******************************************************************************/
#pragma once
#include "stdafx.h"
#include "Player.h"
#include "Object.h"
#include "LevelHandler.h"
#include "WindowsHelper.h"
#include "Object.h"

void Player_HandleMovement(Player *player, LevelMap *levelMap, char input);
void Update_PlayerPosition(Player *player, LevelMap *levelMap, int x, int y);