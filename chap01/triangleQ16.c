#include <stdio.h>

void triangleLB(int n) // 왼쪽 아래가 직각인 이등변 삼각형을 출력
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
}
void triangleLU(int n) // 왼쪽 위가 직각인 이등변 삼각형을 출력
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
            putchar('*');
        putchar('\n');
    }
}
void triangleRU(int n) // 오른쪽위가 직각인 이등변 삼각형을 출력
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            putchar(' ');
        for (int j = n; j >= i; j--)
            putchar('*');
        putchar('\n');
    }
}
void triangleRB(int n) // 오른쪽 아래가 직각인 이등변 삼각형을 출력
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
            putchar(' ');
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
}
int main(void)
{
    int n;

    puts("직각 이등변 삼각형을 출력합니다.");
    do
    {
        printf("크기: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\n왼쪽 아래가 직각\n");
    triangleLB(n);
    printf("\n왼쪽 위가 직각\n");
    triangleLU(n);
    printf("\n오른쪽 위가 직각\n");
    triangleRU(n);
    printf("\n오른쪽 아래가 직각\n");
    triangleRB(n);

    return 0;
}