#include <stdio.h>
int main() {
    int a;
    printf("Input a number: ");
    scanf("%d", &a);
    if (a%2==0){
        printf("Input number is even\n");
    }
    else{
        printf("Input number is odd\n");
    }
    return 0;

}