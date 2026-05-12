#include <stdio.h>
#include <string.h>

union student {
    char name[10];
    int marks;
    char grade;
};

int main() {

    union student s1;
    printf("size of s1 union = %d \n", sizeof(s1));   
    
    // s1.name = "dhairya";
    // strcpy(s1.name, "dhairya");
    gets(s1.name);
    // printf("name = %s \n", s1.name);
    puts(s1.name);
    
    s1.marks = 10;
    printf("Enter marks for student 1 : ");
    scanf("%d", &s1.marks);
    
    printf("marks = %d \n", s1.marks);
    
    s1.grade = 'A';
    
    printf("enter grade :");
    fflush(stdin);
    scanf("%c",&s1.grade);
    
    printf("grade = %c \n", s1.grade);
    
    
 
    return 0;
}