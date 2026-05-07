#include <stdio.h>
#include <conio.h>

void main() {
	int i = 1;
	clrscr();

	for (i = 10; i >= 1; i--) {
		printf("%d ", i);
	}


	/*	extra
	for (; i >= 10;) {
		code
	}
	*/

	getch();
}