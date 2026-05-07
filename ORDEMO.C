#include<stdio.h>

void main(){
	char a;
	
	printf("Enter charecter:");
	scanf("%c",&a);

	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
		printf("charecter is vovels");
	else {
		printf("charecter is consonants");
	}


}
