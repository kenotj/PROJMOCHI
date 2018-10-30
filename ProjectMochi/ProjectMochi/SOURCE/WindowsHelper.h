#define CONSOLE_TITLE "WHO'S THAT MOCHI?" /* DEFINE THE WINDOW TITLE */
#define WINDOW_HEIGHT 300 /* DEFINE THE WINDOW HEIGHT */
#define WINDOW_WIDTH 200 /* DEFINE THE WINDOW WIDTH */
#include "stdafx.h"

void WindowsHelper_Init();
void WindowsHelper_SetCursorPosition(int x, int y);
void WindowsHelper_FullScreen();
void WindowsHelper_HideCursor();
int WindowsHelper_GetConsoleWidth();
int WindowsHelper_GetConsoleHeight();
