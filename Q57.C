#include<stdio.h>

void ascii(char ch)
{
	printf("ascii value:%d",ch);
}
void main()
{
	char ch;
	
	printf("enter character:");
	scanf("%c",&ch);
	ascii(ch);


}