#include<stdio.h>

void main()
	{
	int sub1,sub2,sub3,sub4,sub5;
	int sum;
	float percentage;
	int pass = 1; // pass == 1 -> pass, pass == 0 -> fail
	int count = 0;

	

	printf("Enter sub1 mark: ");
	scanf("%d",&sub1);

	printf("Enter sub2 mark: ");
	scanf("%d",&sub2);

	printf("Enter sub3 mark: ");
	scanf("%d",&sub3);

	printf("Enter sub4 mark: ");
	scanf("%d",&sub4);

	printf("Enter sub5 mark : ");
	scanf("%d",&sub5);

	sum=sub1+sub2+sub3+sub4+sub5;
	printf("sum=%d \n",sum);

	percentage=(float)sum/5;
	printf("percentage=%f \n",percentage);

	if (sub1 < 40) {
		pass = 0;
		count = count + 1;
	}

	if (sub2 < 40) {
		pass = 0;
		 count = count + 1;
	}

	if (sub3 < 40) {
		pass = 0;
		count = count + 1;
	}

	if (sub4 < 40) {
		pass = 0;
		count = count + 1;
	}

	if (sub5 < 40) {
		pass = 0;
		count = count + 1;
	}

	printf("fail count = %d \n", count);

	if (pass == 1) {
		printf("pass ");
	}
	else {
		printf("fail ");
	}

	if (percentage>40)
		printf("pass");

	else
		printf("fail");



}




