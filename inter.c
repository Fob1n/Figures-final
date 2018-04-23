#include "header.h"

/*
 *This function draws the two intersecting lines
 *Input argument: none
 *Output argument: none
*/

void drawInter(void){
	int i, j, k, l, m, n;
	clearScreen();
	for(i=0;i<6;i++){
		for(m=0;m<=i;m++){	//This for-loop prints the spaces from the begining, it
			printf(" ");	//starts with no space and ends by printing 6 spaces
		}
		printf("\\");
		for(j=5;j>i;j--){	//This for-loop prints the spaces between the lines, it
			printf("  ");	//starts by printing 10 spaces and ends by not printing any
		}
		printf("/");
		printf("\n");
	}
	for(k=1;k<7;k++){
		for(n=7;n>k;n--){	//This for-loop prints the spaces between the lines on the bottom
			printf(" ");	//part, it works in the opposite way from the other
		}
		printf("/");
		for(l=0;l<k-1;l++){	//This for-loop prints the spaces from the bigining on the bottom part
			printf("  ");	//it works in the opposite way as the first nested loop
		}
		printf("\\");
		printf("\n");
	}
	printf("\n");
	setColor(WHITE);
}

