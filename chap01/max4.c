#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    return max;
}
int main(void)
{
    int a, b, c, d;
    printf("a값: ");
    scanf("%d", &a);
    printf("b값: ");
    scanf("%d", &b);
    printf("c값: ");
    scanf("%d", &c);
    printf("d값: ");
    scanf("%d", &d);
    printf("최댓값은 %d입니다.", max4(a, b, c, d));
    return 0;
}