#include <stdio.h>

void swap(int *num1, int *num2)
{
    // swap
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Before swap : %d %d \n", num1, num2);
    swap(&num1, &num2);
    printf("After swap : %d %d \n", num1, num2);

    // Extra
    int n3 = 2, n4 = -6;
    printf("Before swap : %d %d \n", n3, n4);
    swap(&n3, &n4);
    printf("After swap : %d %d \n", n3, n4);
}
