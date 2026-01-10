#include <stdio.h>
#include <conio.h>

struct employee{
    int id;
    float salary;
    char name[5];
};

void get(int *, float *, char[]);

void main(){
    struct employee e1,e2,e3;
    get(&e1.id, &e1.salary, e1.name);
    get(&e2.id, &e2.salary, e2.name);
    get(&e3.id, &e3.salary, e3.name);
    printf("%d\t%f\t%s\n",e1.id,e1.salary,e1.name);
    printf("%d\t%f\t%s\n",e2.id,e2.salary,e2.name);
    printf("%d\t%f\t%s\n",e3.id,e3.salary,e3.name);
    getch();
}

void get(int *a, float *b, char c[]){
    printf("Enter the id of employee:\n");
    scanf("%d",a);
    printf("Enter the salary of employee:\n");
    scanf("%f",b);
    printf("Enter the name of employee:\n");
    scanf("%s",c);
}