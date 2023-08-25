#include <stdio.h>

void spira(int n)
{
    int starcount = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            putchar(' ');
        for (int j = 1; j <= starcount; j++)
            putchar('*');
        for (int j = 1; j <= n - i; j++)
            putchar(' ');
        putchar('\n');
        starcount += 2;
    }
}
int main(void)
{
    int n;
    do
    {
        printf("몇 단 피라미드입니까?: ");
        scanf("%d", &n);
    } while (n <= 0);
    spira(n);
    return 0;
}