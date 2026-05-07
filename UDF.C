#include<stdio.h>


/*
syntax
return_type funName() {
	code
}

int float char, ..., void
*/

void greet() {
	printf("Hello cosmos \n");
}

int getSum(int num1, int num2) {
	int sum = num1 + num2;
	return sum;

//        return num1 + num2;
}
int getSub(num1, num2, num3) {
	return num1 - num2 - num3;
}

void main() {
	int ans;
	int n1, n2;
	

	greet(); // fun call
	greet(); // fun call
	greet(); // fun call

	ans = getSum(2, 3);
	printf("ans = %d \n", ans);

	printf("sum 2 = %d \n", getSum(5, -1));

	printf("Enter num1 : ");
	scanf("%d", &n1);
	printf("Enter num2 : ");
	scanf("%d", &n2);

	printf("sum 3 = %d \n", getSum(n1, n2));

	printf("sub = %d \n", getSub(1, 2, 3));

}