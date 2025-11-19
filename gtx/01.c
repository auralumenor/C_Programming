#include <stdio.h>
#include <conio.h>

int main() {


    int a[7],i,j=0;             // Declared Variables
    for (i=0;i<7;i++){          // Loop for values
        printf("Enter the value of %d: \n",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<7;i++){          // Ran a loop To sum all
        j=j+a[i];
    }
    printf("The sum of all the elements is %d\n",j);

    getch();

    return 0;
}