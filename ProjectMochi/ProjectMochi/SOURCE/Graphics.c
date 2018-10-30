/**********************************
Handle the graphics of the game here
-
- 
**********************************/

#include "Graphics.h"

/* Initialize the window */
void Initialize_Window() {
	WindowsHelper_Init();
	WindowsHelper_FullScreen();
	WindowsHelper_HideCursor();
}

/* Print the Digipen Logo */
void Print_DigiPenLogo() {
	FILE *fptr;
	char c;
	errno_t err = fopen_s(&fptr, "SOURCE/ART/MOCHI_ASSET_DigipenLogo_V02.txt", "r");
	
	if (!err) {
		while (fscanf_s(fptr, "%c", &c, 1) != EOF) {
			printf_s("%c", c);
		}
		fclose(fptr);
	}
	else {
		printf("Loading Error!\n");
	}

	Sleep(3600);
	system("cls");
}