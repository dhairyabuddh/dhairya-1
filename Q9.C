#include <stdio.h>
#include <conio.h>
	void main (){
	float simpleInterest;
	int p;
	float r;
	int n;
	clrscr ();
	printf("enter p: ",p);
	scanf("%d",&p);

	printf("enter r: ",r);
	scanf("%f",&r);

	printf("enter n:",n);
	scanf("%d",&n);

	simpleInterest= p * r * n / 100;
	printf("simpleInterest= %f \n",simpleInterest);

	getch ();
}



