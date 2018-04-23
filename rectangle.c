#include "header.h"

void drawRectangle(void){
	int i;
	clearScreen();
	printf(" ");
	drawLine(2);
	for(i=0;i<10;i++){
		if(i<9){
			printf("\n|         |");
		}
		else{
			printf("\n|");
			drawLine(2);
			printf("|");
		}
	}
	printf("\n\n");
	setColor(WHITE);
}
