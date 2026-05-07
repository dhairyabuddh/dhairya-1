#include <stdio.h>
#include <conio.h>
	void main (){
	int num1;
	int num2;
       //	int temp;
	clrscr();
	printf("enter num1:");
	scanf("%d",&num1);

	printf("enter num2:");
	scanf("%d",&num2);

	printf("num1 = %d, num2 = %d \n", num1, num2);
	// method 1 -> with third variable
/*
	temp = num1;
	num1 = num2;
	num2 = temp;
*/
	// method 2 -> without third variable
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("num1 = %d, num2 = %d \n", num1, num2);
	getch();

}