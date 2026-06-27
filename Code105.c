#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, n;

    printf("===== Student Record Management System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n===== Student Records =====\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }

    return 0;
}