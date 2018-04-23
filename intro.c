#include "header.h"

/*
 *This function printf an intro on the terminal screen, telling us how you can choose
  between different figures and colors.
 *Input argument: none
 *Output argument: none
*/
void intro(void){
	gotoxy(5,20);
	printf("	This program lets you choose six different shapes to be");
	gotoxy(6,20);
	printf("	drawn on the terminal screen. Choose a number from the");
	gotoxy(7,20);
	printf("	menu below and press enter, insert any other number than");
	gotoxy(8,20);
	printf("	in the menu to exit the program. You can also choose the");
	gotoxy(9,20);
	printf("	the color of the shape by entering a number from the menu.");
}
