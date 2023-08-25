#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}
int main(void)
{
    int a, b, c;
    printf("a값: ");
    scanf("%d", &a);
    printf("b값: ");
    scanf("%d", &b);
    printf("c값: ");
    scanf("%d", &c);
    printf("최솟값은 %d입니다.", min3(a, b, c));
    return 0;
}