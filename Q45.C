#include<stdio.h>

void main() {
	int arr[5],brr[5],crr[10],i;
	int sum=0;
	
	for (i=0 ;i<5;i++) {
		printf("Enter Number at th%d:", i);
		scanf("%d",&arr[i]);
	}
	printf("\n__________________________________________\n");
	for (i=0 ;i<5 ;i++) {
		printf("Enter Number at th%d:", i);
		scanf("%d", &brr[i]);
	}
	printf("\n__________________________________________\n");
	for (i=0 ;i<5 ;i++) {
		crr[i]=arr[i];
		crr[i+5]=brr[i];
		sum += crr[i]; // first five elems sum // sum=sum+crr[i];
		sum += crr[i + 5]; // last five elems
	}
	printf("sum of third array=%d",sum);

	printf("\n__________________________________________\n");

	for (i=0 ;i<5 ;i++) {
		crr[i]=arr[i]+brr[i];
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", crr[i]);
	}


}
