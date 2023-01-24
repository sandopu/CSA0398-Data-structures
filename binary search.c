#include <stdio.h>

int binary_search(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the number to be searched: ");
    scanf("%d", &key);
    int index = binary_search(arr, size, key);
    if (index == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}

