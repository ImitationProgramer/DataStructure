#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define swap(type, x, y) \
    do                   \
    {                    \
        type t = x;      \
        x = y;           \
        y = t;           \
    } while (0)
void shuffle(int a[], int n)
{
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        if (i != j)
            swap(int, a[i], a[j]);
    }
}
int main(void)
{
    int n;

    printf("요소 개수: ");
    scanf("%d", &n);
    int *x = calloc(n, sizeof(int));

    printf("%d개의 정수를 입력하세요.\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    shuffle(x, n);

    printf("배열의 모든 요소의 순서를 뒤섞었습니다.\n");
    for (int i = 0; i < n; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);
    return 0;
}