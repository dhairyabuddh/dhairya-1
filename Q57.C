#include<stdio.h>
#include<conio.h>
void ascii(char ch)
{
	printf("ascii value:%d",ch);
}
void main()
{
	char ch;
	clrscr();
	printf("enter character:");
	scanf("%c",&ch);
	ascii(ch);
	getch();

}