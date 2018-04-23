#include "header.h"

/*
 *This function draws a circlelike shape when executed, only using printf.
  It also clears the screen in the beginning of the function so that the
  figures doesn´t overlap each other when the program is not stopped in
  between different figures.
 *Input argument: none
 *Output argument: none
*/
void drawCircle(void){
	clearScreen();
	printf("     * *\n");
	printf("   *     *\n");
	printf(" *         *\n");
	printf("*           *\n");
	printf("*           *\n");
	printf(" *         *\n");
	printf("   *     *\n");
	printf("     * *\n");
	printf("\n");
	setColor(WHITE);
}
