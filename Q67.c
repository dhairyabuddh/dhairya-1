#include <stdio.h>
union student {
    char name[10];
    int marks;
    char grade;
};

void updateMarks(union student *s, int newMarks) {
    s->marks = newMarks;
}

// updateMarks(s1, 90)

int main () {
    union student s1;

    // step1 : print size
    printf("size of s1 = %d \n", sizeof(s1));

    // step2 : access members using pointer 
    // pointer obj: stores address of an obj (i.e. s1)
    union student *sobj = &s1;

    // s1.marks -> normal obj
    sobj->marks = 10;
    printf("marks = %d \n", sobj->marks);

    printf("Enter grade : ");
    scanf("%c", &sobj->grade);
    printf("grade = %c \n", sobj->grade);

    // update marks using function
    printf("Before update marks : %d \n", s1.marks);
    updateMarks(&s1, 100);
    printf("After update marks : %d \n", sobj->marks);
 
    union student s2;

    s2.marks = 40;
    printf("Before : %d \n", s2.marks);
    updateMarks(&s2, 80);
    printf("After : %d \n", s2.marks);

    return 0;
}