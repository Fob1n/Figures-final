#include "header.h"

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
