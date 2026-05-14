#include <stdio.h>

int main() {
	int arr[5],i,sum=0;
	
	for(i=0;i<5;i++){
		printf("enter number:");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("total of array=%d",sum);
return 0;
}
