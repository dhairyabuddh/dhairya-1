#include<stdio.h>

void main(){
	int max,num1,num2,num3;
	

	printf("Enter num1:");
	scanf("%d",&num1);

	printf("Enter num2;");
	scanf("%d",&num2);

	printf("Enter num3:");
	scanf("%d",&num3);

	max=num1;
	if (max<num2)
		max=num2;
	if(max<num3)
		max=num3;
	printf("max=%d \n",max);




}

