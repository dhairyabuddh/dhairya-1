#include <stdio.h>

int main() {
	int num = 1;
	
	while (10 == 10) {
		printf("%d ", num);
		num++; // num += 1; // num = num + 1;
	}
	
	/*
	++ -> num += 1 -> num = num + 1
	-- -> num -= 1 -> num = num - 1
	
	+=
	-=
	*=
	/=
	%=
	*/
	return 0;
}