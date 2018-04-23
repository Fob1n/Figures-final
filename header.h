#include <stdio.h>

//Constant definition
#define ESC 0x1B

enum FGCOLORS{BLACK=30,RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};


//Function definitions
void intro(void);
int menu(void);
void drawTriangle(void);
void drawCircle(void);
void drawRectangle(void);
void drawSquare(void);
void drawLine(int);
void drawInter(void);
void clearScreen(void);
void gotoxy(int, int);
void setColor(char);
