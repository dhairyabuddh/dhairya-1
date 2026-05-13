#include<stdio.h>

int  main() {
	int num,power,ans=1,i;
	
	printf("Enter base number:");
	scanf("%d",&num);

	printf("enter power value:");
	scanf("%d",&power);

	for(i=1;i<=power;i++)
	{
		ans*=num;
	}
	printf("ans of power value=%d",ans);

}
