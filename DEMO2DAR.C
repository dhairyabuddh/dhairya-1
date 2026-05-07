#include <stdio.h>
#include <conio.h>

void main() {
	int i, j;
	int arr1[][2] = {
		{3, 2},
		{5, 3},
		{6, 3},
		{2, 2}
	};
	// method 2
	// arr2 -> 4X3
	int arr2[][3] = {3, 2, 5, 6, 6, 2, 3, 5, 1, 5};

	clrscr();

	for (i = 0; i < 4; i++) { // row (sub array)
		for (j = 0; j < 2; j++) { // column (elems of sub array)
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("\n--------------\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	getch();
}