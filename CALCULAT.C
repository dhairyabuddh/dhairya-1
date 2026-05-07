#include<stdio.h>
#include<conio.h>
void main(){
	int num1,num2;
	float ans;
	char signle;

	clrscr();
	printf("Enter num1:");
	scanf("%d",&num1);

	printf("Enter num2:");
	scanf("%d",&num2);

	fflush(stdin); // new "to empty scanf buffer"

	printf("Give Signle:");
	scanf("%c",&signle);
//	printf("hello %c cosmos ", signle);

	switch (signle)
	{
		case '+':
		ans = num1 + num2;
		break;

		case '-':
		ans = num1 - num2;
		break;

		case '*':
		ans=num1*num2;
		break;

		case '/':
		ans=num1/(float)num2;
		break;
	}

		printf("ans=%f \n",ans);
	getch();
}
