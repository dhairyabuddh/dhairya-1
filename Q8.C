#include <stdio.h>
#include <conio.h>
void main (){
	int num;
	int size;
	clrscr ();

	size = sizeof(num);
	printf("size = %d \n", size);

	printf("sizeof float = %d \n", sizeof(float));
	printf("sizeof char = %d \n", sizeof(char));

	printf("size of number = %d \n", sizeof(1));
	// float, double
	printf("size of number with decimal = %d \n", sizeof(1.2));
	printf("size of number with decimal = %d \n", sizeof(1.2f));

	printf("double = %d \n", sizeof(double));
	printf("size 'a' = %d \n", sizeof((char)'a')); // ascii values -> future
	getch ();
}