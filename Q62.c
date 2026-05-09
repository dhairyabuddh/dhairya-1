#include <stdio.h>
int *getMax(int arr[], int size)
{
    int i, max;
    int *p1;
    p1 = &max; // address

    *p1 = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (*p1 < arr[i])
        {

            *p1 = arr[i];
        }
    }
    return p1;
}
int main()
{
    int arr[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter num at th%d : ", i);
        scanf("%d", &arr[i]);
    }
    int ans = *getMax(arr, 5);

    printf("largest = %d \n", ans);
}