#include <stdio.h>

int main()
{
    int n, mul = 0;
    printf("Enter the number of natural number to be added: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        mul = mul + i;
    }
    printf("The sum of first n natural number is: %d",mul);
    return 0;
}
