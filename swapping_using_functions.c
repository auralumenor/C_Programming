#include <stdio.h>
int swap(int ,int);

int swap(int x, int y){
    printf("The numbers before swapping are %d and %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("The numbers is %d and %d\n", x , y);
    return x, y;
}

int main(){
    int a =23, b = 76;
    printf("The numbers are %d and %d\n",a, b);
    printf("swapping %d", swap(a,b));
    return 0;
}