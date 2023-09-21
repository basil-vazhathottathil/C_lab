#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    char arr[n];
    printf("Enter %d characters to insert into the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf(" %c", &arr[i]);
    }

    char search;
    printf("Enter the character to search for: ");
    scanf(" %c", &search);

    for (int i = 0; i < n; ++i) {
        if (arr[i] == search) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found in array\n");
    return 0;
}


