#include<stdio.h>


void changeCase(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			continue;
		}

		if (str[i] >= 'a' && str[i] <= 'z') { // lowercase -> uppercase
			str[i] -= 32;
		}
		else {
			str[i] += 32;
		}
	}
}

void main () {
	char name[20];
	clrscr ();
	printf("enter name : ");
	gets(name);

	puts(name);
	changeCase(name);
	puts(name);


}

/*
  a -> 97, A -> 65
  b -> 98, B -> 66
  c -> 99, C -> 67
  ...

  to uppercase -> -32
  to lowercase -> +32

*/