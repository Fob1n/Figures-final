#include "header.h"

/*
 *This function prints three different lines, depending on what you want. The first is
  for printing only a horizontal line, the second one is used to make the top and bottom
  of the square and the rectangle and the last one is use in the triangle.
 *Input argument:
		int: is used to know what line is wanted when called
 *Output argument: none
*/
void drawLine(int arg){
	if(arg==1){
		clearScreen();
		printf("_________\n\n");
		setColor(WHITE);
	}
	if(arg==2){
		printf("_ _ _ _ _");
	}
	if(arg==3){
		printf("_ _  _ _");
	}
}

