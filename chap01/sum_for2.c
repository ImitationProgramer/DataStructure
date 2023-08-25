#include <stdio.h>

int main(void)
{
    int n;
    puts("1부터 n까지의 총합을 구합니다.");
    printf("n값: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    for (int i = 1; i < n; i++)
        printf("%d + ", i);
    printf("%d = %d", n, sum);
}