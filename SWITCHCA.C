#include <stdio.h>
#include <conio.h>

void main() {
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);

	/*
	num == 1
		print "num is one"
	num == 3
		printf "num is three"
	num == 10
		print "num is ten "
	num == -3
		print "num is -ve three "
	else
		print "else case "
	*/
	switch (num) {
		case 1:
			printf("num is one ");
			break;
		case 3:
			printf("num is three ");
			break;

		case -4:
			printf("num is -ve four ");
			break;
		case 2:
			printf("num is two ");
			break;
		default:
			printf("default case ");
			break;
	}



}