#include<stdio.h>
#include<conio.h>
void main(){
	int fact = 1, num,i;

	clrscr();
	printf("enter num:");
	scanf("%d",&num);

	for (i=1;i<=num; i++){
		 fact *= i; // fact = fact * i;
	}
	printf("%d", fact);
	getch();
}

