#include "header.h"

/*
 *This function calls for the intro and the menu that we see when we run the program.
  When a selection is made in the menu, the answer is returned here and by that selection
  call for different figures to be drawn. When the program is stopped, the screen is
  cleared and the cursor is moved to the top left corner.
*/
int main(void){
	int num;
	clearScreen();
	while(1){
		setColor(WHITE);
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
