#include <stdio.h>
#include <conio.h>
#include<string.h>
void main() {

	char a[56],b[56],choice;
	int i;
	clrscr();
	printf("enter string:");
	scanf("%s",&a);

	printf("\na.length\nb.copy\nc.merge\nd.compare\ne.exit\n");

	printf("enter choice:");
	scanf("%s",&choice);

	switch(choice)
	{
		case 'a':
			i=strlen(a);
			printf("length:%d",i);
		break;
		case 'b':
			strcpy(b,a);
			puts(b);
		break;
		case 'c':
			printf("enter another string:");
			scanf("%s",&b);
			strcat( a, b);
			printf("%s ",a);
		      //	puts(a);
		break;
		case 'd':
			printf("enter another string:");
			scanf("%s",&b);
			i=strcmp(a,b);
			if(i==0)
			{
				printf("both string are same");
			}
			else
			{
				printf("not same");
			}
		break;
		case 'e':
			printf("exit");
		break;

	}
	getch();
}

