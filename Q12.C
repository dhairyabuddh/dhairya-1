#include <stdio.h>
#include <conio.h>
void main(){
	int salary;
	float ta,da,hra,pf;
	float tax,total,net;

	
	printf("enter basic salary:");
	scanf("%d",&salary);

	ta=salary*2/100;
	printf("ta=%f\n",ta);

	da=salary*2/100;
	printf("da=%f\n",da);

	hra=salary*5/100;
	printf("hra=%f\n",hra);

	pf=salary*3/100;
	printf("pf=%f\n",pf);

	tax=salary*5/100;
	printf("tax=%f\n",tax);

	total=salary+ta+da+hra-pf;
	net=total-tax;
	printf("total salary:%f\n",total);
	printf("net salary:%f",net);

}