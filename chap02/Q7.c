#include <stdio.h>
#include <stdlib.h>
void ary_copy(int a[], const int b[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = b[i];
}
int main(void)
{
    int n;

    printf("요소의 개수: ");
    scanf("%d", &n);

    int *x = calloc(n, sizeof(int));
    int *y = calloc(n, sizeof(int));

    printf("%d개의 정수를 입력하세요.\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    ary_copy(y, x, n);
    printf("배열 x의 모든 요소를 배열 y에 복사했습니다.\n");
    for (int i = 0; i < n; i++)
        printf("y[%d] = %d\n", i, y[i]);

    free(x); // 배열 x를 해제
    free(y); // 배열 y를 해제

    return 0;
}