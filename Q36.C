#include<stdio.h>
#include<conio.h>
void main() {
	int i;
	clrscr();

	for (i=1;i<=25;i++) {
		if (i % 5 == 0 )
			continue;

		printf("%d ", i);
	}
	printf("\n");

	getch();
}