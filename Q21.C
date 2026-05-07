#include<stdio.h>


	void main(){
	int purchase;
	float total;
	int dis = 0;
	clrscr ();
	printf("Enter purchase amount:");
	scanf("%d",&purchase);

	if (purchase >= 5000)
		dis = 10;
	/*
	if (purchase>=5000) {
		total=purchase-(purchase*1/10);
	}
	else {
		total=purchase;
	}
	*/
	total = purchase - (float)purchase / 10;

	printf("total=%f \n",total);


}