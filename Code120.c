#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("Student Added Successfully!\n");
}

void displayStudents() {
    int i;

    if(count == 0) {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int r, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found!\n");
}

void updateMarks() {
    int r, i, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);

            printf("Marks Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found!\n");
}

void deleteStudent() {
    int r, i, j, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {

            for(j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            count--;
            printf("Student Record Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}