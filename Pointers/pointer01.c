#include <stdio.h>

int swp(int*, int*);
int main() {

    int a=5, b=25;
    int *p = &a, *q = &b;
    printf("Address before Changing is %p\n",*p);
    printf("Value before changing is %d\n",*p);
    swp(&a ,&b);
    printf("Address after Changing is %p\n",*p);
    printf("Value after Changing is %d\n",*p);

    return 0;
}

int swp(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}