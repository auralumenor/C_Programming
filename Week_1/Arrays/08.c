#include <stdio.h>
#include <conio.h>

int main(){
    int a[3][3],b[3][3],i=0,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("Enter the element a[%d][%d]: \n",i+1,j+1);
                scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("Enter the element b[%d][%d]: \n",i+1,j+1);
                scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    

    getch();

    return 0;
}