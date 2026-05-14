#include<stdio.h>

int  main(){
	int arr[5],i,num;
	int check = 0;
	// check = 0 -> not present | check = 1 -> present
	
	for (i=0 ; i < 5 ; i++){
		printf("enter number:");
		scanf("%d",&arr[i]);

	}
	printf("enter other number:");
	scanf("%d",&num);

	for(i = 0; i < 5; i++){
		if(arr[i]==num){
			check = 1;
			break;
		}
	}
	printf(check == 1 ? "elem present " : "elem not present ");
	return 0;

}
