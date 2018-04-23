#include "header.h"

/*
 *This function prints a triangle when called
 *Input argument: none
 *Output argument: none
*/
void drawTriangle(void){
	int i, j, k;
	clearScreen();
	for(i=1;i<6;i++){	//The loop runs 5 times to get a triangle with height 5 prints
		for(k=6;k>i;k--){	//This loop printf out the necessary spaces before the
			printf(" ");	//actual triangle, so that they all doesn´t start at
		}			//the same column
		printf("/");
		if(i<5){
			for(j=0;j<i-1;j++){//This loop prints spaces between the legs of the triangle
				printf("  ");
			}
		}
		else{	//On the last row we want to print a line instead of spaces to get the base of the triangle
			drawLine(3);
		}
		printf("\\");
		printf("\n");
	}
	printf("\n");
	setColor(WHITE);
}
