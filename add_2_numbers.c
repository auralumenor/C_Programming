#include <stdio.h>
int add(int x, int y);
int main() {
    int a, b, sum;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    sum = add(a, b);
    printf("The sum of %d and %d is: %d",a, b, sum);
    return 0;
}

int add(int x, int y) {
    return x + y;
}