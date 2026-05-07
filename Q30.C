#include<stdio.h>

void main(){
	int fact = 1, num,i;

	
	printf("enter num:");
	scanf("%d",&num);

	for (i=1;i<=num; i++){
		 fact *= i; // fact = fact * i;
	}
	printf("%d", fact);

}

