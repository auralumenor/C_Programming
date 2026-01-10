#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    while (n > 0) {
        i = i * n;
        n--;
    }
    printf("Factorial of the given number is %d",i);
    return 0;
}