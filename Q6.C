#include <stdio.h>
#include <conio.h>
	void main (){
	float pi;
	int r;
	int area;

	clrscr ();
	printf("pi=%f",pi);
	scanf("%f",&pi);

	printf("r=%d",r);
	scanf("%d",&r);

	area =(float)pi*r*r;
	printf("area=%d \n",area);

	getch ();
}
