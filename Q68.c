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
struct employeeMoreDetails {
    int sscamrks;
    union employeeDetails e2;
};
int main () {
    struct employeeMoreDetails e3;
    e3.e2.e1.empno=5;
    printf("Employee number = %d",e3.e2.e1.empno);
    e3.e2.salary=1000000;
    printf("\nEmployee salary= %ld",e3.e2.salary);
    e3.e2.age=39;
    printf("\n Employee age = %d",e3.e2.age);
    return 0;
}