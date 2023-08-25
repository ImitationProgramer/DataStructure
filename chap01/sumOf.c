#include <stdio.h>

int sumof(int a, int b)
{

    int sum = 0;
    if (a >= b)
        for (int i = b; i <= a; i++)
            sum += i;
    else
        for (int i = a; i <= b; i++)
            sum += i;
    printf("%d와 %d사이 모든 정수의 합(%d,%d도 포함): %d", a, b, a, b, sum);
    return 0;
}
int main(void)
{
    int a, b;
    puts("정수의 합");
    printf("a값: ");
    scanf("%d", &a);
    printf("b값: ");
    scanf("%d", &b);
    sumof(a, b);
    return 0;
}