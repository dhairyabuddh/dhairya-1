#include <stdio.h>
int main () {
    int i;
    FILE *p1;
    FILE *p2;
            p1=fopen("./odd.txt","w");
            p2=fopen ("./even.txt","w");
 
    for ( i = 1;i <= 100 ; i++) {
        if (i % 2 != 0) {
            fprintf(p1,"\n odd : %d",i);
        }
        else {
            fprintf(p2,"\n even : %d",i);
        }
    }
            fclose(p1);
            fclose(p2);
 
    return 0;
}