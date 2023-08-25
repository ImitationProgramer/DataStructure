#include <stdio.h>

int main(void)
{
    int n;
    printf("정사각형을 출력합니다.\n");
    printf("입력할 수: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}