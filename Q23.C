#include<stdio.h>
#include<conio.h>
void main() {
	long int annIncome,intax;

	clrscr();
	printf("Enter your annual income :");
	scanf("%ld",&annIncome);

	if (annIncome<=100000)
		printf("income tax=0");
	else if (annIncome>100000 && annIncome<=150000)
		printf("income tax=10");
	else if (annIncome>150000 && annIncome<=200000)
		printf("income tax=15");
	else if (annIncome>200000 && annIncome<=250000)
		printf("income tax=20");
	else if (annIncome>250000)
		printf("income tax=25");


	getch();
}

