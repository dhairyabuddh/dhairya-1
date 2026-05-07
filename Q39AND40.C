#include <stdio.h>
#include <conio.h>
void main() {
	int i, j,k,num;
	clrscr();

	/*
	printf("* * * * \n");
	printf("* * * * \n");
	printf("* * * * \n");
	printf("* * * * \n");
	*/
	for (i = 1; i <= 4; i++) { // row
		// printf("* * * * \n");
		/*
		printf("* ");
		printf("* ");
		printf("* ");
		printf("* ");
		*/
		for (j = 1; j <= 4; j++) { // column || cell (* )
			printf("* ");
		}
		printf("\n");
	}

	printf("\n--------------------\n");

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	/*
	extra
	* * * *
	* * *
	* *
	*

	*/

	printf("\n--------------------\n");

	for (i = 1; i <= 4; i++) {
		for (j = 4; j >= i; j--) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n--------------------\n");
	for (i = 1; i <= 4; i++) {
		// spaces
		for (j = 1; j < i; j++)
			printf("  ");

		// stars
		for (j = 4; j >= i; j--)
			printf("* ");

		printf("\n");
	}
	printf("\n--------------------\n");
	for (i = 1;i <= 4 ;i++)
	{
		for(j = 4;j >= i; j--)
		{
			printf(" ");
		}
		for(j = 1;j <= i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}

	printf("\n--------------------\n");
	for (i = 1;i <= 4 ;i++)
	{
		for(j = 4;j >= i; j--)
		{
			printf(" ");
		}
		for(j = 1;j <= i; j++)
		{
			if(j % 2 != 0)
				printf(" 1");
			else
				printf(" 0");
		}
		printf("\n");
	}

	 getch();



}