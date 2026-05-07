#include<stdio.h>

void main() {
	int num,rn=0,ld,ans;
	
	printf("Enter number:");
	scanf("%d",&num);
	ans=num;
	while (num!=0){
		ld= num % 10;
		rn=rn*10+ld;
		num=num/10;
	}
//	printf("num = %d rn = %d ans = %d \n", num, rn, ans);
	if (ans == rn){
		printf("palindrome num.");
	}
	else {
		printf("num is not palindrome num.");
	}

}
