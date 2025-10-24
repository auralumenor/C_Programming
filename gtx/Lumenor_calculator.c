#include <stdio.h>
#include <math.h>
#include <conio.h>

// Functions Initializaton

void intro();
void main_men();
void sci_men();
void get1(int*,int*);
void get2(float*);
int add(int,int);
int sub(int,int);
int mult(int,int);
float div(int,int);
float squart(float);
float powr(float);
float sin(float);
float cos(float);
float log(float);

// Main Function

int main() {
    
    int a,b;

    intro();



    getch();
    return 0;

}

// Functions Declaration

void intro(){
    printf("Welcome To LumeCalc\n");
    printf("The calculator By Lumenor\n");
}
void main_men(){
        int a, b;
        char op;
        get1(&a, &b);
        do {
        printf("Enter The Operator you want to use:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        scanf(" %c",&op);
        switch(op){
            case '1':
                add(a,b);
                break;
            case '2':
                sub(a,b);
                break;
            case '3':
                mult(a,b);
                break;
            case '4':
                div(a,b);
                break;
            case '5':
                break;
                default:
                printf("Invalid Prompt\n");
        }
    } while (op != '5');
}
void sci_men(){
    int a;
    char op;
    get2(&a);
    do {
        printf("Enter the operator you want to use:\n1. Square Root\n2. Power\n.3. Sine\n4. Cosine\n5. Logarithm\n6. Exit\n");
        scanf(" %c",&op);
        switch(op){
            case '1':
                squart(a);
                break;
            case '2':
                powr(a);
                break;
            case '3':
                sin(a);
                break;
            case '4':
                cos(a);
                break;
            case '5':
                log(a);
                break;
            default:
            printf("Invalid Prompt\n");
        }
    } while (op != '6');
}
void get1(int *a, int *b){
    printf("Enter 2 numbers:\n");
    scanf("%d%d",a,b);
}
void get2(float *a){
    printf("Enter a number:\n");
    scanf("%lf",a);
}
int add(int a, int b){
    printf("The Sum is: %d\n", a+b);
    return a+b;
}
int sub(int a, int b){
    printf("The Difference is:%d\n",a-b);
    return a-b;
}
int mult(int a, int b){
    printf("The Product is: %d\n",a*b);
    return a*b;
}
float div(int a, int b){
    if (b == 0){
        printf("Division by Zero is not possible\n");
    } else {
    printf("The Quotient is: %.2f\n",(float)a/b);
    return (float)a/b;
    }
}
float squart(float a){
    if (a<0){
        printf("Square root is not possible for negative integers\n");
        return -1;
    } else if (a==0){
        printf("Are you kidding me cuz Everyone knows root of zero is 0\n");
        return 0;
    } else {
        printf("Square root of %.2f is: %.2f\n", a, sqrt(a));
        return squrt(a);
    }
}
float powr(float a){

}
float sin(float a){

}
float cos(float a){

}
float log(float a){

}