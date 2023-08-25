#include <stdio.h>

int main(void)
{
    int height, length;
    printf("직사각형을 출력합니다.\n");
    printf("높이: ");
    scanf("%d", &height);
    printf("너비: ");
    scanf("%d", &length);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= length; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}