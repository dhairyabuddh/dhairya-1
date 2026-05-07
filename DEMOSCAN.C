#include <stdio.h>
#include <conio.h>

void main() {
	int num1, num2;
	int sum;
	
	// input -> scanf
	// output -> printf
	printf("Enter num1 :");
	scanf("%d", &num1);

	printf("Enter num2 :");
	scanf("%d", &num2);
	printf("num1 = %d num = %d \n", num1,num2);

	sum = num1 + num2;
	printf("sum = %d \n", sum);
	printf("%d + %d = %d \n", num1, num2, num1 + num2);

	// + - * / %

}