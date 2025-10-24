#include <stdio.h>
void main(){
    float a,b;
    char op;
    printf("Enter first number: \n");
    scanf("%f", &a);
    printf("Enter second number: \n");
    scanf("%f", &b);
    printf("Enter the operator you want to use (+, -, *, /):  \n");
    scanf(" %c", &op);
    switch(op) {
        case '+':
        printf("Result: %.2f\n", a+b);
        break;
        case '-':
        printf("Result: %.2f\n", a-b);
        break;
        case '*':
        printf("Result: %.2f\n", a*b);
        break;
        case '/':
        if(b!=0){
            printf("Result: %.2f\n", a/b);
            break;}
        else{
            printf("Can't divide by zero\n");
            break;}
            default:
            printf("Invalid operator!");
        
        
    }
}