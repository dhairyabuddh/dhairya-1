#include <stdio.h>
#include <conio.h>
void main() {
	int age;
	clrscr();
	printf("Enter your age : ");
	scanf("%d", &age);

	if (age > 18) {
		printf("You can vote ");
	}

	if (age <= 18) {
		printf("You cannot vote ");
	}


	getch();
}

