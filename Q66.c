#include <stdio.h>

struct employee {
    float salary,inc,tot;
    int num;
}emp;
int getupdate () {
    emp.inc=emp.salary*10/100;
    emp.tot=emp.salary+emp.inc;
    printf("\nincrement:%f",emp.inc);
    printf("new salary:%f",emp.tot);

}
int main()
{
        printf("enter no:");
        scanf("%d",&emp.num);
        printf("enter salary:");
        scanf("%f",&emp.salary);
        getupdate();
        
}
