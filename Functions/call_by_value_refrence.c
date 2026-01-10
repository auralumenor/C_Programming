#include <stdio.h>

void asd(int *a, int *b); // For Call By Refrence
void dfy(int a, int b); // For Call By Value
void main() {
    int a=10,b=20,x=45,z=76;
    printf("Using Call By Refrence\n");
    printf("Before swapping \n %d\t%d\n",a,b);
    asd(&a,&b);                                 //Using Call By Refrence
    printf("After swapping \n %d\t%d\n",a,b);
    printf("\nUsing Call By Value\n");
    printf("Before swapping \n %d\t%d\n",x,z);
    dfy(x,z);                                   //Using Call By Value
    printf("Before swapping \n %d\t%d\n",x,z);
}
void asd(int *a, int *b){   // For Call By Refrence
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void dfy(int a, int b){     // For Call By Value
    a=a+b;
    b=a-b;
    a=a-b;
}