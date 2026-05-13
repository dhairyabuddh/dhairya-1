#include <stdio.h>
int main () {
    int num1;
    char data[100];
    FILE *p;
    printf("Enter number1: ");
    scanf("%d",&num1);
    p=fopen("./demo.txt","a");
    fprintf(p,"\nno:%d",num1);
    fclose(p);

    p=fopen("./demo.txt","r");
    while(fscanf(p,"%s",&data)!=EOF)
    {    
        printf("\n%s",data);
    }
    
    return 0;
}
