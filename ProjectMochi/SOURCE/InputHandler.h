#pragma once
#include "stdafx.h"
#include "Player.h"

void ProcessInput(Player *player);
void HandleInput(Player *player, char c);
void Player_HandleMovement(Player *player, char input);