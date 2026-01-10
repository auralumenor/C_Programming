#include <stdio.h>
#include <conio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
void main() {
    int i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\t Name: %s\t Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }
    getch();
}