#include "header.h"

/*
 *This funtion prints a rectangle when it is called.
 *Input argument: none
 *Output argument: none
*/
void drawRectangle(void){
	int i;
	clearScreen();
	printf(" ");
	drawLine(2);	//Draw the top of the rectangle
	for(i=0;i<10;i++){
		if(i<9){
			printf("\n|         |");	//Print the sides of the rectangle
		}
		else{	//The last row should contain a base too
			printf("\n|");
			drawLine(2);//Draw the bottom of the rectangle
			printf("|");
		}
	}
	printf("\n\n");
	setColor(WHITE);
}
