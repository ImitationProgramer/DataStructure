#include <stdio.h>

int main(void)
{
    int num;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &num);
    int count = 1;
    do
    {
        if (num < 10)
        {
            printf("그 수는 %d자리 입니다.", count);
            break;
        }
        num /= 10;
        count++;
    } while (num > 10);
    if (count > 1)
        printf("그 수는 %d자리 입니다.", count);
    return 0;
}