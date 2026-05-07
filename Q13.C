#include <stdio.h>
#include <conio.h>
	void main (){
	int num1,num2;

	clrscr ();
	printf("Enter num1:");
	scanf("%d",&num1);

	printf("Enter num2:");
	scanf("%d",&num2);

	if (num1>num2){
		printf("num1 is bigger than num2.");

	}
	if (num2>num1){
		printf("num2 is bigger than num1.");

	}

	if (num1==num2){
		printf("num1 is iqueal to num2");

	}


	getch ();
}