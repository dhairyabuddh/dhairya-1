#include<stdio.h>
#include<conio.h>
void main () {
	int i,con=0,vov=0;
	char name[20];

	clrscr();
	printf("Enter number:");
	gets (name);
	puts (name);

	for (i= 0 ; name[i]!='\0';i ++){
		if ( name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name [i]=='u'){
			vov++;
		}
		else {
			con++;
		}
	}
	printf("vovels in name=%d \n consonants in name=%d",vov,con);
	getch();
}