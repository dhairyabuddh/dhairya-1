#include<stdio.h>

int  main() {
	int num,i, check = 1;
	
	printf("enter number:");
	scanf("%d",&num);

	for (i=2; i <= num - 1; i++){
		if (num % i == 0)
			check = 0;
	}

	if (check == 1)
		printf("prime number ");
	else
		printf("normal number ");

}