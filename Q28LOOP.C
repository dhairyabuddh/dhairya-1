#include<stdio.h>

void main() {
	int num1=1;
	int num2=2;

	clrscr ();

	while (num1 <= 30){
		 printf(" %d ",num1);
		 num1+=2;
	}
	printf("\n below num is odd.\n");

	while (num2<=30) {
		printf(" %d ",num2);
		num2+=2;
	}
	printf("\n below num is even ");

}