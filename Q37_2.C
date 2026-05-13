#include<stdio.h>

int main() {
	int num, i;
	long int prod = 1;

	

	up:

	prod = 1;
	for (i = 1; i <= 10; i++) {
		printf("Enter num %d : ", i);
		scanf("%d", &num);
		if (num == 0)
			goto up;
		// printf("num = %d \n", num);
		prod *= num; // prod = prod * num;
	}
	printf("prod = %ld \n", prod);


}