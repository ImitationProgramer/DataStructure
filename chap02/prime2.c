// 1000 이하의 소수를 나열(버전2)
#include <stdio.h>

int main(void)
{
    int prime[500];            // 소수를 저장하는 배열
    int ptr = 0;               // 이미 얻은 소수의 개수
    unsigned long counter = 0; // 나눗셈 횟수
    prime[ptr++] = 2;          // 2는 소수입니다.
    for (int n = 3; n <= 1000; n += 2)
    { // 홀수만을 대상
        int i;
        for (i = 1; i < ptr; i++)
        {
            counter++;
            if (n % prime[i] == 0)
                break;
        }
        if (ptr == i)
            prime[ptr++] = n;
    }
    for (int i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);
    printf("나눗셈을 실행한 횟수: %lu\n", counter);

    return 0;
}