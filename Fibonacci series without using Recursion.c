#include <stdio.h>

int main()
{
    int num, i, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci series: ");
    for (i = 1; i <= num; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

