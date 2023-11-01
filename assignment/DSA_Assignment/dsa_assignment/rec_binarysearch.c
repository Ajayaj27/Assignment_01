#include <stdio.h>

int rec_binary_Search(int arr[], int key, int left, int right) {
    if (left > right) 
    {
        return -1;  // Element not found
    }

    int mid = (left + right) / 2;

    if (arr[mid] == key) 
    {
        return mid;  // Element found at index
    }

    if (arr[mid] > key) 
    {
        return rec_binary_Search(arr, key, left, mid - 1);  // Search the left half
    }
    else
    {
        return rec_binary_Search(arr, key, mid + 1, right);  // Search the right half
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int result = rec_binary_Search(arr, key, 0, size - 1);
    
    if (result != -1) 
    {
        printf("Element %d found at index %d\n", key, result);
    }
    else 
    {
        printf("Element %d not found in the array\n", key);
    }
    
    return 0;
}
