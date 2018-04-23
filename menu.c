#include "header.h"

int menu(void){
	int num;
	int color;
	gotoxy(12,30);
	printf("1. Draw triangle");
	gotoxy(13,30);
	printf("2. Draw circle");
	gotoxy(14,30);
	printf("3. Draw rectangle");
	gotoxy(15,30);
	printf("4. Draw square");
	gotoxy(16,30);
	printf("5. Draw horizontal line");
	gotoxy(17,30);
	printf("6. Draw intersecting lines");
	gotoxy(12, 60);
//Change these colors so that you choose with a number instead of char
	printf("1. Red");
	gotoxy(13, 60);
	printf("2. Green");
	gotoxy(14, 60);
	printf("3. Yellow");
	gotoxy(15, 60);
	printf("4. Blue");
	gotoxy(16, 60);
	printf("5. Cyan");
	gotoxy(17, 60);
	printf("6. Magenta");
	gotoxy(18, 60);
	printf("7. White");

	gotoxy(18,30);
	printf("   Choose shape: ");
	scanf("%d", &num);

	if(num>0 && num<7){
		gotoxy(19,60);
		printf("   Choose color: ");
		scanf("%d", &color);
	}
	if(color==1)
		setColor(RED);
	else if(color==2)
		setColor(GREEN);
	else if(color==3)
		setColor(YELLOW);
	else if(color==4)
		setColor(BLUE);
	else if(color==5)
		setColor(CYAN);
	else if(color==6)
		setColor(MAGENTA);
	else if(color==7)
		setColor(WHITE);
	else printf("Invalid value!\n");
	return num;
}
