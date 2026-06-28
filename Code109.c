#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int count = 0, choice, i, searchId;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &books[count].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[count].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[count].author);

                count++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\n--- Book List ---\n");
                    for (i = 0; i < count; i++) {
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n\n", books[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                int found = 0;
                for (i = 0; i < count; i++) {
                    if (books[i].id == searchId) {
                        printf("\nBook Found!\n");
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book Not Found!\n");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}