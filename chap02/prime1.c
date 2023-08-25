// 1000 이하의 소수를 나열(버전1)
#include <stdio.h>

int main(void)
{
    unsigned long counter = 0; // 나눗셈 횟수
    for (int n = 2; n <= 1000; n++)
    {
        int i;
        for (i = 2; i < n; i++)
        {
            counter++;
            if (n % i == 0) // 나누어떨어지면 소수가 아님
                break;
        }
        if (n == i) // 마지막까지 나누어떨어지지 않음
            printf("%d\n", n);
    }
    printf("나눗셈을 실행한 횟수: %lu\n", counter);

    return 0;
}