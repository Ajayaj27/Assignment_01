#include <stdio.h>

int rec_linear_Search(int arr[], int key, int index, int size) {
    if (index == size) {
        return -1;  // Element not found
    }

    if (arr[index] == key) {
        return index;  // Element found at index
    }

    return rec_linear_Search(arr, key, index + 1, size);  // Recursively search the next element
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int result = rec_linear_Search(arr, key, 0, size);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }
    
    return 0;
}
