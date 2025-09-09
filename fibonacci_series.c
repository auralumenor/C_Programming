#include <stdio.h>

int main() {
    int n;
    int t1 = 0;
    int t2 = 1;
    int next;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    next = t1 + t2;
    printf("Fibonacci Series: %d,%d", t1, t2 );
    while (next <= n) {
        printf(",%d", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    printf("\nBy Raman Raj");
    return 0;
}