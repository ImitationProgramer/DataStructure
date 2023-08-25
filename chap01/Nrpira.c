#include <stdio.h>

void nrpira(int n)
{
    int numbercount = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            putchar(' ');
        for (int j = 1; j <= (n - 1) * 2 + 1 - numbercount + 1; j++)
            printf("%d", i % 10);
        for (int j = 1; j <= i; j++)
            putchar(' ');
        putchar('\n');
        numbercount += 2;
    }
}
int main(void)
{
    int n;
    printf("몇 단의 숫자피라미드 입니까?: ");
    scanf("%d", &n);
    nrpira(n);
    return 0;
}