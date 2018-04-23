#include "header.h"

//This function clears the screen
void clearScreen(void){
    printf("%c[2J", ESC);
    fflush(stdout);
}


//This function lets you go to the place you want on the screen
void gotoxy(int row, int col){
    printf("%c[%d;%dH", ESC, row, col);
    fflush(stdout);
}


void setColor(char color){
    printf("%c[1;%dm", ESC, color);
    fflush(stdout);
}

