#include <stdio.h>
void CheckPrime (int num) {
    int i,j,flag;
    for (i = 1;i <= num ; i++) {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d\t",i);
        }
    }
    
    
}    
int main () {
    int num;
    
    printf("Enter number :");
    scanf("%d",&num);
    CheckPrime(num);
}    