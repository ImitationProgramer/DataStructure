#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int main(void)
{
    int number;
    int *height = calloc(number, sizeof(int));
    srand(time(NULL));
    number = 5 + rand() % 16;
    for (int i = 0; i < number; i++)
    {
        height[i] = 100 + rand() % 90;
        printf("height[%d] = %d\n", i, height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);
    return 0;
}