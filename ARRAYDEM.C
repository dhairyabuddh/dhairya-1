#include <stdio.h>
#include <conio.h>
void main() {
	int num = 10;
	// array -> variable which store multiple values of SAME Datatype
	// same datatype -> c, cpp, java, ...
	// different datatypes -> python, js, ...

	// size = number of elements in array
	// datatype arrName[size];
	int marks[5];
	int i;
	clrscr();

	marks[0] = 10;
	printf("marks [0] = %d \n", marks[0]);

	marks[1] = 20;
	printf("marks[20] = %d \n", marks[1]);

	// for input
	for (i = 0; i < 5; i++) {
		printf("Enter %dth elem : ", i);
		scanf("%d", &marks[i]);
	}

	// for output
	for (i = 0; i < 5; i++) {
		printf("i = %d, marks[%d] = %d \n", i, i, marks[i]);
	}
	getch();
}

