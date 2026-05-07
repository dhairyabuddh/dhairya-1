#include<stdio.h>

float getArea (int base ,int height) {
	float area;
	area= base * height/2;
	return area;
}
void main() {
	int base,height;

	float area ;

	clrscr ();

	printf("Enter base of triangle :");
	scanf ("%d",&base);

	printf("Enter height of triangle :");
	scanf ("%d",&height);

	area= getArea(base,height);
	printf ("area of triangle : %f",area);
	getch ();
}
