        #include<stdio.h>
void  main()
{
        int a,b,c,*p1,*p2,*p3;

    p1=&a;
    p2=&b;
    p3=&c;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    *p3=*p1+*p2;
    printf("sum is:%d",*p3);
    
}
