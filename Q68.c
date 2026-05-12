#include<stdio.h>
struct employee {
    char name[29];
    int empno;
    
};
union employeeDetails {
    int age;
    float salary;
    struct employee e1;
};
int main () {
    union employeeDetails e2;

    e2.e1.empno=5;
    printf("Employee number = %d",e2.e1.empno);
    
    return 0;
}