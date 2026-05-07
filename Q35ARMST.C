#include<stdio.h>

#include<math.h>
void main() {
	int num,ans=0,ld,count=0,temp;
	

	printf("Enter number:");
	scanf("%d",&num);

	temp=num;

	while (num>0) {
		count++;
		num/=10;
	}
	num=temp;

	while (num>0){
		ld=num%10;
		ans=ans+pow(ld,count);
		num/=10;
	}

	printf("ans= %d \n",ans);

	if(ans==temp){
		printf("armstrong num.\n");
	}
	else
		printf("not armstrong num. \n");


}
