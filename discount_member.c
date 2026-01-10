#include <stdio.h>
void main() {
    int a, b;
    char d;
    printf("Welcome to our store!\n");
    printf("Are you a member? (y/n): \n");
    scanf(" %c", &d);
    if (d == 'y' || d == 'Y') {
        printf("Enter your total purchase amount: \n");
        scanf("%d", &a);
        if (a > 100) {
            b = a * 0.9;
            printf("You get a 10%% discount! Your total is: %d\n", b);
        } else {
            printf("Your total is: %d\n", a);
        }
    } else if (d == 'n' || d == 'N') {
        printf("Enter your total purchase amount: \n");
        scanf("%d", &a);
        if (a >150) {
            b = a * 0.95;
            printf("You get a 5%% discount! Your total is: %d\n", b);
        } else {
            printf("Your total is: %d\n", a);
        }
    } else {
        printf("Invalid input. Please enter 'y' or 'n'.\n");
    }
}