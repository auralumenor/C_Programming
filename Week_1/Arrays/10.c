#include <stdio.h>
#include <conio.h>
void main() {
    int i, j;
    float A[3][3], B[3][3],add[3][3], sub[3][3], mul[3][3], div[3][3];
    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ",i,j);
            scanf("%f", &A[i][j]);
        }
    }
    printf("\nEnter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ",i,j);
            scanf("%f", &B[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            add[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
            mul[i][j] = A[i][j] * B[i][j];
            if (B[i][j] != 0)
                div[i][j] = A[i][j] / B[i][j];
            else
                div[i][j] = 0;
        }
    }
    printf("\nSum of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", add[i][j]);
        }
        printf("\n");
    }
    printf("\nDifference of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", sub[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct (element-wise) of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", mul[i][j]);
        }
        printf("\n");
    }
    printf("\nDivision (element-wise) of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", div[i][j]);
        }
        printf("\n");
    }
    getch();
}