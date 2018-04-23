#include "header.h"

/*
 *This function will use VT100 escape sequence "\ESC[2J" to erase
  the whole terminal screen
 *Input argument: none
 *Return argument: none
*/
void clearScreen(void){
    printf("%c[2J", ESC);
    fflush(stdout);
}


/*
 *This function uses VT100 escape sequence "\ESC[row;colH"
  to set the cursor to the specific location of the terminal screen
 *Input argument:
		int row: row number (1 is top)
		int col: column number (1 is left)
 *Return argument: none
*/
void gotoxy(int row, int col){
    printf("%c[%d;%dH", ESC, row, col);
    fflush(stdout);
}

/*
 *This function uses VT100 escape sequence "\ESC{1;colorm" to change the color of
  the bars
 *Input argument:
	int color: color string that is defined in "screen.h"
 *Return argument: none
*/
void setColor(char color){
    printf("%c[1;%dm", ESC, color);
    fflush(stdout);
}

