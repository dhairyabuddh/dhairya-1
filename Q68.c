#include<stdio.h>
struct employee {
    char name[29];
    int empno;
    
};
union employeeDetails {
    int age;
    long int  salary;
    struct employee e1;
};
int main () {
    union employeeDetails e2;

    e2.e1.empno=5;
    printf("Employee number = %d",e2.e1.empno);
    e2.salary=1000000;
    printf("\nEmployee salary= %ld",e2.salary);
    e2.age=39;
    printf("\n Employee age = %d",e2.age);
    return 0;
}