#include <stdio.h>

int  main(){
	int num1=1;
	int num2=2;

	for (num1=1; num1<=30; num1+=2){
		printf(" %d ",num1);
	}
	printf("\n");
	for (num2=2; num2<=30; num2+=2) {
		printf(" %d ",num2);
	}
	return 0;
}