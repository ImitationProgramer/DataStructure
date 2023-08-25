#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a값: ");
    scanf("%d", &a);
    printf("b값: ");
    scanf("%d", &b);
    do
    {
        printf("a보다 큰 값을 입력하세요!\n");
        printf("b값: ");
        scanf("%d", &b);
    } while (a >= b);
    int result = b - a;
    printf("b-a는 %d입니다.", result);
    return 0;
}