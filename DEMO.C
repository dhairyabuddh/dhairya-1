#include <stdio.h>
#include <conio.h>

void main() {
/*	// data type varName = value; */
	// single line comment

	/*
		multi line comments
		asf
		asdf asdf asdf asf
		asdf
	*/
	int num = 12;
	float pi = 3.1415;
	char grade = 'a';

	long int income = 10000;
	double tax = 9030.2323;
	clrscr();

	printf("num = %.5d \n", num); // %d -> int
	printf("pi = %.2f \n", pi); // %f -> float
	printf("grade = %c \n", grade);

	printf("income = %ld \n", income);
	printf("tax = %lf \n", tax);
	getch();
}