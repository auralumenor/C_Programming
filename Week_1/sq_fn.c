#include <stdio.h>


void get (int*,int*);
int swx(int,int);

void main(){
    int a,b;
    get(&a,&b);
    swx(a,b);

}

void get(int *a,int *b){
    printf("Enter 2 numbers: \n");
    scanf("%d%d",a,b);

}

int swx(int a, int b){
    int dfx,vfx;
    dfx = a*a;
    vfx = b*b;
    printf("The sum of both squares are: %d\n",dfx+vfx);
    return dfx+vfx;
}