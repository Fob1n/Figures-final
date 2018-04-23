#include "header.h"

void drawTriangle(void){
	int i, j, k;
	clearScreen();
	for(i=1;i<6;i++){
		for(k=6;k>i;k--){
			printf(" ");
		}
		printf("/");
		if(i<5){
			for(j=0;j<i-1;j++){
				printf("  ");
			}
		}
		else{
			drawLine(3);
		}
		printf("\\");
		printf("\n");
	}
	printf("\n");
	setColor(WHITE);
}
