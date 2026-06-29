#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, i, searchRoll;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Student Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Student Record Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Records Found!\n");
                } else {
                    printf("\nRoll No\tName\t\tMarks\n");
                    printf("---------------------------------\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%d\n",
                               roll[i], name[i], marks[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        printf("\nStudent Found:\n");
                        printf("Roll No: %d\n", roll[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Marks: %d\n", marks[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Student Record Not Found!\n");
                break;

            case 4:
                printf("Enter Roll Number to Update Marks: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        printf("Enter New Marks: ");
                        scanf("%d", &marks[i]);
                        printf("Marks Updated Successfully!\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Student Record Not Found!\n");
                break;

            case 5:
                printf("Exiting System...\n");
                break;

            default:
                printf("Invalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}