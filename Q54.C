#include <stdio.h>
#include <conio.h>

int getsum(num1,num2){
	return num1+num2;
}
void main () {
	int ans;
	clrscr ();

	ans=getsum ();
	printf("ans=%d \n",getsum(4,5));
	getch ();
}
