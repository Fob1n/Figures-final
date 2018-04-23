#include "header.h"

/*
 *This function printf a square when it is called. Check "rectangle.c" for further explanation,
  they work in the same way except that in "rectangle.c" the for loop runs longer.
 *Input argument: none
 *Output argumnet: none
*/
void drawSquare(void){
	int i;
	clearScreen();
	printf(" ");
	drawLine(2);
	for(i=0;i<5;i++)
		if(i<4){
			printf("\n|         |");
		}
		else{
			printf("\n|");
			drawLine(2);
			printf("|");
		}
	printf("\n\n");
	setColor(WHITE);
}
