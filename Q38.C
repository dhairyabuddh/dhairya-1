#include <stdio.h>
#include <conio.h>

void main() {
	int i,a=-1,b=1,c;
	long int num;
	

	for (i = 1; i <= 10; i++) {
		printf("%d ", i * i);
	}
	printf("\n______________________________________\n");
	for(i=1;i<=12;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	printf("\n");
	for (num=1;num<=10;num++){
		printf(" %ld ",num * num * num);
	}

}
