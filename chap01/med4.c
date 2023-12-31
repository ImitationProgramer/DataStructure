#include <stdio.h>

int med4(int a, int b, int c)
{
    if (a >= b)
        if (b >= c)
            return b;
        else if (a <= c)
            return a;
        else
            return c;
    else if (a > c)
        return a;
    else if (b > c)
        return c;
    else
        return b;
}
int main(void)
{
    printf("med4(%d,%d,%d) = %d\n", 3, 2, 1, med4(3, 2, 1)); // a>b>c
    printf("med4(%d,%d,%d) = %d\n", 3, 2, 2, med4(3, 2, 2)); // a>b=c
    printf("med4(%d,%d,%d) = %d\n", 3, 1, 2, med4(3, 1, 2)); // a>c>b
    printf("med4(%d,%d,%d) = %d\n", 3, 2, 3, med4(3, 2, 3)); // a=c>b
    printf("med4(%d,%d,%d) = %d\n", 2, 1, 3, med4(2, 1, 3)); // c>a>b
    printf("med4(%d,%d,%d) = %d\n", 3, 3, 2, med4(3, 3, 2)); // a=b>c
    printf("med4(%d,%d,%d) = %d\n", 3, 3, 3, med4(3, 3, 3)); // a=b=c
    printf("med4(%d,%d,%d) = %d\n", 2, 2, 3, med4(2, 2, 3)); // c>a=b
    printf("med4(%d,%d,%d) = %d\n", 2, 3, 1, med4(2, 3, 1)); // b>a>c
    printf("med4(%d,%d,%d) = %d\n", 2, 3, 2, med4(2, 3, 2)); // b>a=c
    printf("med4(%d,%d,%d) = %d\n", 1, 3, 2, med4(1, 3, 2)); // b>c>a
    printf("med4(%d,%d,%d) = %d\n", 2, 3, 3, med4(2, 3, 3)); // b=c>a
    printf("med4(%d,%d,%d) = %d\n", 1, 2, 3, med4(1, 2, 3)); // c>b>a
    return 0;
}