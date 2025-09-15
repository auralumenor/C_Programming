#include <stdio.h>
int main() {
    int n, next, t1 = 0, t2 = 1;
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
    return 0;
}