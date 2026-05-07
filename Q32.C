#include<stdio.h>
#include<conio.h>
void main() {
	int num=1, ld;
	int rn = 0;
	clrscr();
	printf("Enter num:",num);
	scanf("%d",&num);

	while (num != 0) {
		ld = num % 10; // last digit

		// code
		rn = rn * 10 + ld;

		num /= 10; // num = num / 10; -> remove last digit
//		printf("ld = %d num = %d rn = %d \n", ld, num, rn);
	}
	printf("rn = %d \n", rn);
	getch();
}

