#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    do {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Reverse String\n");
        printf("5. Compare Strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice) {
            case 1:
                printf("Length of string = %lu\n", strlen(str) - 1);
                break;

            case 2:
                strcpy(temp, str);
                printf("Copied String: %s", temp);
                break;

            case 3:
                printf("Enter another string: ");
                fgets(temp, sizeof(temp), stdin);
                strcat(str, temp);
                printf("Concatenated String: %s", str);
                break;

            case 4: {
                int len = strlen(str);
                printf("Reversed String: ");
                for (int i = len - 2; i >= 0; i--) {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;
            }

            case 5:
                printf("Enter another string: ");
                fgets(temp, sizeof(temp), stdin);

                if (strcmp(str, temp) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}