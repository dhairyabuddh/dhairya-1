#include <stdio.h>
#include <conio.h>
	void main (){

	int num1,num2;
	int sum;
	int sub;
	int mul;
	int div;
	clrscr ();
	printf("enter num1:");
	scanf("%d",&num1);

	printf("enter num2:");
	scanf("%d",&num2);

	printf("num1=%d \nnum2=%d\n",num1,num2);

	sum=num1+num2;
	printf("sum=%d\n",sum);

	sub=num1-num2;
	printf("sub=%d\n",sub);

	mul=num1*num2;
	printf("mul=%d\n",mul);

	div=num1/num2;
	printf("div=%d",div);

}