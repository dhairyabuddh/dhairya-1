#include <stdio.h>
#include <conio.h>

void main() {
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("Even number ");
	else
		printf("Odd number ");

	// condition ? true code : false code;
	num % 2 == 0 ? printf("Even number ") : printf("Odd number ");

	printf(num % 2 == 0 ? "even " : "odd ");

}