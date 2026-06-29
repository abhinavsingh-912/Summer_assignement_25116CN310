#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main() {
    struct Book books[100];
    int n = 0, choice, id, i, found;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[n].bookId);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[n].author);

                books[n].issued = 0;
                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Books Available!\n");
                } else {
                    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
                    printf("-------------------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t%s\n",
                               books[i].bookId,
                               books[i].title,
                               books[i].author,
                               books[i].issued ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(books[i].bookId == id) {
                        printf("\nBook Found\n");
                        printf("ID: %d\n", books[i].bookId);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        printf("Status: %s\n",
                               books[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(books[i].bookId == id) {
                        found = 1;

                        if(books[i].issued)
                            printf("Book is already issued!\n");
                        else {
                            books[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(books[i].bookId == id) {
                        found = 1;

                        if(!books[i].issued)
                            printf("Book is already available!\n");
                        else {
                            books[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
                break;

            case 6:
                printf("Exiting Library System...\n");
                break;

            default:
                printf("Invalid Choice! Try Again.\n");
        }

    } while(choice != 6);

    return 0;
}