#include <stdio.h>
void main() {
    int n, a, t1 = 0, t2 = 1;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    a = t1 + t2;
    printf("Fibonacci Series: %d,%d", t1, t2 );
    while (a <= n) {
        printf(",%d", a);
        t1 = t2;
        t2 = a;
        a = t1+t2;
    }
    printf("\nBy Raman Raj\n");
}