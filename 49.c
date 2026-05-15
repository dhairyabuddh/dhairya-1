#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	int l=0,i;
	clrscr();
	printf("entet name:");
	gets(name);
	puts(name);
	for(i=0;name[i]!='\0';i++)
	{
		l++;
	}
	printf("length:%d",l);

	getch();
}