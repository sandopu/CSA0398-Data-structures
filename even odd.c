#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter the number of elements you want to check: ");
    scanf("%d", &num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            printf("The number is even.\n");
        }
        else
        {
            printf("The number is odd.\n");
        }
    }
    return 0;
}

