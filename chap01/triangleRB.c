#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("몇 단 삼각형입니까?: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
            putchar(' ');
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}