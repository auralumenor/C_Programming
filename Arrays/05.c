#include <stdio.h>

void get(int a[3][3], int b[3][3]);
void print_matrix(const char *name, int m[3][3]);

int main() {

    int a[3][3], b[3][3];

    get(a, b);

    print_matrix("A", a);
    print_matrix("B", b);

    return 0;
}

void get(int a[3][3], int b[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("Enter A[%d][%d]: ", i+1, j+1);
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("Enter B[%d][%d]: ", i+1, j+1);
        scanf("%d",&b[i][j]);
        }
    }
}

void print_matrix(const char *name, int m[3][3]) {
    printf("%s =\n", name);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}