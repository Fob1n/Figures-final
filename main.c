#include "header.h"

int main(void){
	int num;
	clearScreen();
	while(1){
		intro();
		//Menu
		num = menu();
		if(num==1){
			drawTriangle();
		}
		else if(num==2){
			drawCircle();
		}
		else if(num==3){
			drawRectangle();
		}
		else if(num==4){
			drawSquare();
		}
		else if(num==5){
			drawLine(1);
		}
		else if(num==6){
			drawInter();
		}
		else{
			clearScreen();
			gotoxy(1,1);
			break;
		}
	}
		return 0;
}
