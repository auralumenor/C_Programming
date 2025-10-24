#include <stdio.h>
void get(int*, int*, int*, int*, int*);
int sum(int, int, int, int, int);
float avg(int);

int main(){
    int a, b, c, d, e; 
    get(&a, &b, &c, &d, &e);
    int dvs=sum(a, b, c, d, e);
    avg(dvs);
    return 0;
}

int sum(int x1, int x2, int x3, int x4, int x5){
    int dvs =x1+x2+x3+x4+x5;
    printf("The sum is %d\n", dvs);
return dvs;
}
float avg(int dvs){
    printf("The average is %.2f\n",dvs/5.0);
    return dvs/5.0;
}
void get(int *x1, int *x2, int *x3, int *x4, int *x5){
    printf("Enter the five Numbers: \n");
    scanf("%d%d%d%d%d", x1,x2,x3,x4,x5);
}