#include<stdio.h>

void main() {
	int num,div,mod;
	clrscr ();
	printf("Enter number:");
	scanf("%d",&num);

	div=num/10;
	printf("div=%d \n",div);

	mod=num%10;
	printf("mod=%d \n",mod);
	getch ();
}
