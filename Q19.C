#include <stdio.h>
#include <conio.h>

void main(){
	int password,conformPass;

	clrscr();
	printf("Enter password: ");
	scanf("%d",&password);

	printf("Enter conform password: ");
	scanf("%d",&conformPass);

	printf(password==conformPass?"Both are equal": "Both arenot equal");

	getch();

}