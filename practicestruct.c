#include <stdio.h>
struct employee {
    int eno;
    char name[34];
    flaot salary;
}e1;
int main () 
{
    printf("Enter number:");
    scanf("%d",&e1.eno);
    printf("Enter employee name : ");
    scanf("%s",&e1.name);
    printf("Enter employee salary :");
    scanf("%f",&e1.salary);
    
    printf("\n employee number: \n employee name : \n employee salary: \n");
}