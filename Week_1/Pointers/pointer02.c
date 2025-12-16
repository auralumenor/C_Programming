#include <stdio.h>

int swap(int *a,int *b);
int main(){
    int a=5,b=6;
    int *p = &a, *q = &b;
    printf("Values before swap a = %d and b = %d\n",*p,*q);
    swap(&a, &b);
    printf("Values after swap a = %d and b = %d\n",*p,*q);
    return 0;

}

int swap(int *a, int *b){
    int s;
    s=*a;
    *a=*b;
    *b=s;
}