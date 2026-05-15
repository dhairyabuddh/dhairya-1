#include<stdio.h>
#include<conio.h>
void main () {
	int i;
	char name[20];
	clrscr ();
	printf("Enter number:");
	gets (name);
	for (i = 0; name[i]!='\0';i ++){
		if (name[i] >= 'A' && name[i] <= 'Z')
			name[i]=name[i]+32;
		else
			name[i]=name[i]-32;
	}
	puts (name);
	getch ();
}