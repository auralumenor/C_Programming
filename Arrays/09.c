#include <stdio.h>
#include <conio.h>
int main() {
    int matrix[3][3], transpose[3][3];
    int i, j, sum = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: \n",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        sum += transpose[i][i];
    }
    printf("\nSum of diagonal elements of transpose = %d\n", sum);
    getch();
    return 0;
}