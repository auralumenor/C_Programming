#include <stdio.h>
void main() {
    int a;
    printf("Enter your percentage: \n");
    scanf("%d",&a);
    int b = a/10;
    switch(b) {
        case 10:
            printf("Your grade is A+");
            break;
        case 9:
            printf("Your grade is A");
            break;
        case 8:
            printf("Your grade is B+");
            break;
        case 7:
            printf("Your grade is B");
            break;
        case 6:
            printf("Your grade is C");
            break;
        case 5:
            printf("Your grade is D");
            break;
        case 4:
            printf("Your grade is F");
            break;
        default:
            printf("Invalid input");
    }            
}