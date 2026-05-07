#include <stdio.h>
#include <conio.h>
void main(){
	int arr[5],brr[5],crr[10],i;
	clrscr();
	for (i = 0;i < 5;i ++) {
		printf("enter number at %d : ", i);
		scanf("%d",&arr[i]);
	}
	for (i = 0;i < 5;i ++) {
		printf("enter number at %d : ", i);
		scanf("%d", &brr[i]);
	}
	for (i = 0;i < 5;i ++){
		crr[i]= arr[i];
		crr[i+5]= brr[i];
	}
	for (i = 0; i < 10; i++)
		printf("%d ",crr[i]);

	getch();
}
