#include <stdio.h>
#include <conio.h>
struct student{
    int d;
    char c[10]; 
    int a;

};


int main() {

    int i;
    struct student students[3];

struct student s12 ={1,"Ankit",23,};
struct student s22 ={.d = 1, .c = "Rahul", .a = 12};

    printf("%d\t%s\t%d\n", s12.d, s12.c, s12.a);
    printf("%d\t%s\t%d\n", s22.d, s22.c, s22.a);


    for(i=0;i<3;i++){
        printf("Enter the id of %d students: \n",i+1);
        scanf("%d", &students[i].d);
        printf("Enter the name of %d student: \n",i+1);
        scanf(" %s", students[i].c);
        printf("Enter the age of %d student: \n",i+1);
        scanf("%d", &students[i].a);
    }
    for(i=0;i<3;i++){
        printf("%d\t%s\t%d\n",students[i].d, students[i].c, students[i].a);
    }

getch();

    return 0;
}