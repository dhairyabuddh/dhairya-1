#include <stdio.h>
#include <conio.h>
void main() {
	int i, j, counter = 1;
	char ch = 'A',alfa='a';
	clrscr();

//1).
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf("%.2d ", counter);
			counter++;
		}
		printf("\n");
	}
	printf("______________________________________________");
// 2).
	for (i = 1; i <= 4; i++){
		for (j = 1; j <= i; j++) {
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
	}
	printf("______________________________________________ \n") ;
// 3).
	counter=1;
	for (i=1;i<=4;i++){
		for(j=1;j<=i;j++){
		printf("%d ",counter);
		}
		counter++;
		printf("\n");
	}
	printf("______________________________________________ \n");
//4).
	for (i = 1;i<=4;i++){
		for(j=4;j>=i;j--){
			printf(" ");
		}
		for(j=1; j<=i;j++){
			printf("%c ",alfa);
		}
		alfa++;
		printf("\n");
	}
	getch();

}
