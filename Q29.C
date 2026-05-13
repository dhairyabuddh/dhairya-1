#include <stdio.h>

int main() {
	int num1,num2;
	int i;
	

	do {
			printf("enter num1: ");
			scanf("%d ",&num1);

			printf("enter num2:");
			scanf("%d ",&num2);

			printf("Enter operation:");
			scanf("%d ",&i);

		switch (i)  {
			case 1:
				printf("sum = %d ",num1 + num2);
				break;
			case 2:
				printf("sub = %d ",num1 - num2);
				break;
			case 3:
				printf("mul = %d ",num1 * num2);
				break;
			case 4:
				printf("div = %f ",(float)num1 / num2);
				break;
			case 5:
			      printf("exit");
			      break;
			default :
				printf("invalide ");

		}

	} while (i!=5);



}