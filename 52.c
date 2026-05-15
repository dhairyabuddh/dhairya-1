#include <stdio.h>
#include <conio.h>
void main() {
	int i,l=0;
	char name[20];
	clrscr ();

	printf("Enter name:");
	gets (name);
	for (i = 0;name[i]!='\0';i ++) {
		l++;
	}
	printf("%d",l);
	printf("\n");

	for(i = l;i >= 0 ;i --) {
		printf("%c",name[i]);
	}

	getch ();
}