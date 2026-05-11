#include<stdio.h>
struct employee{
    int eno;
    char name[45];
    float salary;
}emp;
int main()
{

    struct employee e1;
    printf("enter emp no:");
    scanf("%d",&emp.eno);
    printf("enter name:");
    scanf("%s",&emp.name);
    printf("enter salary:");
    scanf("%f",&emp.salary);
    printf("emp no:%d\nemp name:%s\nsalary:%f",emp.eno,emp.name,emp.salary);
    return 0;
}