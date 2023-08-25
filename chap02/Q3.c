#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n)
{
    int sum = 0, ave = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    ave = sum / n;
    return ave;
}
int main(void)
{
    int number;
    printf("사람 수: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("%d 명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++)
    {
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    printf("평균값은 %.1f입니다.\n", aveof(height, number));
    free(height);
    return 0;
}