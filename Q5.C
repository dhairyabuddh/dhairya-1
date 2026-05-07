#include <stdio.h>
#include <conio.h>

	void main (){
	int subject1;
	int subject2;
	int subject3;
	int subject4;
	int subject5;
	int sum;
	float percentage;
	

	printf("enter subject1 : ");
	scanf("%d", &subject1);

	printf("enter subject2 : ");
	scanf("%d", &subject2);

	printf("enter subject3 : ");
	scanf("%d", &subject3);

	printf("enter subject4 : ");
	scanf("%d", &subject4);

	printf("enter subject5 : ");
	scanf("%d", &subject5);

	sum=subject1+subject2+subject3+subject4+subject5;
	printf("sum=%d \n",sum);

//	percentage = sum / 500 * 100;
	percentage = (float)sum / 5;
	printf("percentage = %f \n", percentage);

}