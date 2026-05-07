#include <stdio.h>
#include <conio.h>

int getdata (int a[], int size) {
	int i ;

		for (i = 0;i < size; i ++){
			printf ("Enter %dth Element :",i);
			scanf ("%d",&a[i]);

		}
		printf("\n");
		return a[i];
}
int getsum (int a[] ,int size) {

	int sum=0;

	int i;
		for (i=0;i < size ; i ++) {
			sum = sum+a[i];
		}

		return sum;
}
void main() {
	int arr[5],sum;
	clrscr ();


	getdata (arr,5);

	sum = getsum (arr,5);

	printf("sum of 5 array =%d \n",sum);
	getch ();
}

