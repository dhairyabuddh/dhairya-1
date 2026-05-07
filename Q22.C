#include<stdio.h>
#include<conio.h>
void main() {
	int sub1,sub2,sub3,sub4,sub5;
	int total;
	float perc;
	clrscr();
	printf("Enter sub1 marks:");
	scanf("%d",&sub1);

	printf("Enter sub2 marks:");
	scanf("%d",&sub2);

	printf("Enter sub3 marks:");
	scanf("%d",&sub3);

	printf("Enter sub4 marks:");
	scanf("%d",&sub4);

	printf("Enter sub5 marks:");
	scanf("%d",&sub5);

	total=sub1+sub2+sub3+sub4+sub5;
	printf("total=%d \n",total);

	perc=(float)total/5;
	printf("perc=%f \n",perc);
	if(sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40)
	{
		if(perc>=40 && perc<45)
			printf("You are in pass class");
		else if(perc>=45 && perc<60)
			printf("You are in second class");
		else if(perc>=60 && perc<75)
			printf("You are in first class");
		else if(perc>=75 && perc<90)
			printf("You are in distinction");
		else if(perc>=90)
			printf("You are in merit");
	}
	else
	{
		printf("\nfail");
	}


	getch();

}