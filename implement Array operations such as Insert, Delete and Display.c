#include <stdio.h>
#define MAX_SIZE 10

void insert(int arr[], int *size, int element, int position)
{
    int i;
    // Check if the array is full
    if (*size == MAX_SIZE)
    {
        printf("Error: Array is full\n");
        return;
    }
    // Shift elements to the right
    for (i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    // Insert the element
    arr[position] = element;
    (*size)++;
    printf("Element inserted successfully\n");
}

void delete(int arr[], int *size, int position)
{
    int i;
    // Check if the array is empty
    if (*size == 0)
    {
        printf("Error: Array is empty\n");
        return;
    }
    // Shift elements to the left
    for (i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("Element deleted successfully\n");
}

void display(int arr[], int size)
{
    int i;
    printf("The array elements are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[MAX_SIZE], size = 0, element, position;
    char choice;

    do {
        printf("Enter your choice:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        scanf(" %c", &choice);

        switch(choice)
        {
            case '1':
                printf("Enter the element to be inserted: ");
                scanf("%d", &element);
                printf("Enter the position at which the element should be inserted: ");
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;
            case '2':
                printf("Enter the position of the element to be deleted: ");
                scanf("%d", &position);
                delete(arr, &size, position);
                break;
            case '3':
                display(arr, size);
                break;
            case '4':
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while(choice != '4');
    return 0;
}

