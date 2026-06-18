#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found) {
        printf("Element found at position %d\n", mid + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}