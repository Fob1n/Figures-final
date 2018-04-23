#include "header.h"

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

