#include <stdio.h>

int main(void)
{
    int n;

    puts("가우스의 덧셈");
    printf("n값: ");
    scanf("%d", &n);
    int sum = 0, b = n;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            int a = i;
            sum += (a + b);
            b--;
        }
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            int a = i;
            sum += (a + b);
            b--;
        }
        sum += n / 2 + 1;
    }
    printf("1부터 %d까지의 정수 합: %d", n, sum);
    return 0;
}