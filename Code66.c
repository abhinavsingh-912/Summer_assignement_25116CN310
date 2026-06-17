#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2, i, j, found;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the arrays is:\n");

    for(i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }

    for(i = 0; i < n2; i++) {
        found = 0;

        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}