#include <stdio.h>

int linear_search(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
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
    int index = linear_search(arr, size, key);
    if (index == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}

