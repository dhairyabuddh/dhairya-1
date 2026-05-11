#include <stdio.h>
int getlength (char name[],int size) {
    int i,l=0;
    for (i=0;name[i] != '\0';i++) {
        l ++;
    }
    return l;
}
int main () {
    char name[20];
    int l=0;
    printf("enter number :");
    scanf("%s",&name);
    printf("lenght of string = %d",getlength (name,29));
}