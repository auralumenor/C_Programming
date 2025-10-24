#include <stdio.h>

int sum(int, int);

int sum(int x, int y){
printf("Enter 2 Numbers: \n");
scanf("%d%d", &x, &y);
printf("The numbers are %d and %d\n", x, y);
printf("The sum is %d\n", x+y);
return x+ y;
}

int main(){
    int a, b;
    printf("\n", sum(a,b));
    return 0;
}