#include<stdio.h>
int main () {
    int  i,nu1,nu2;
    for (i = 1;i <= 30 ; i = i+2 ) {
        printf("%d",i);
    }
    printf("below number is odd .");
    for (i = 2; i <= 30; i = i + 2 ) {
        printf("%d",i);
    }
    return 0;
}

