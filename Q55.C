#include<stdio.h>


int getsum (int num1,int num2) {
	int sum=num1+num2;
	return sum;
}
int getsub (int num1, int num2) {
	int sub=num1-num2;
	return sub;
}
int getmul (int num1 , int num2) {
	int mul = num1 * num2;
	return mul;
}
float getdiv (float num1 , float num2) {
	float div= num1 / num2;
	return div;
}
void main () {

	clrscr ();

	printf ("ans of sum= %d \n",getsum (5,34));

	printf ("ans of sub= %d \n",getsub (55,7));

	printf ("ans of mul = %d \n",getmul (23,12));

	printf ("ans of div = %f \n",getdiv (34,12));


}