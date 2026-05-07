#include <stdio.h>
#include <conio.h>
void main () {
	int arr[5],i,max,min;
	
	for(i=0; i<5 ;i++){
		printf("Enter Number on th%d:",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for (i = 1; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("max = %d \n", max);


	// extra -> find out min elem index
	min=0;
	for (i =1;i<5;i ++){
		if (arr[min] > arr[i])
			min = i;
	}
	printf("min index = %d \n", min);


}

