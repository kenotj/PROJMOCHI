/******************************************************************************/
/*!
\file   WindowsHelper.h
\par    Course: GAM100
\brief
		WindowsHelper.c header file
*/
/******************************************************************************/
#include "stdafx.h"
#define CONSOLE_TITLE "WHO'S THAT MOCHI?" /* DEFINE THE WINDOW TITLE */
#define WINDOW_HEIGHT 200 /* DEFINE THE WINDOW HEIGHT */
#define WINDOW_WIDTH 300 /* DEFINE THE WINDOW WIDTH */

void WindowsHelper_Init();
void WindowsHelper_SetCursorPosition(int x, int y);
void WindowsHelper_FullScreen();
void WindowsHelper_HideCursor();
void WindowsHelper_ClearScreen();
int WindowsHelper_GetConsoleWidth();
int WindowsHelper_GetConsoleHeight();
