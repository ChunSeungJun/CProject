#include <stdio.h>

int main()
{
    // 변수 생성
    int a = 1;
    int b = 0;
    int c = 5;

    while (a <= c)              // a가 c보다 작거나 같다면 참
    {
        b = 0;                  // b를 0으로 초기화
        while (b <= c - a)      // b가 C에서 a를 뺀 값보다 작거나 같다면 참
        {
            printf(" ");        // 공백
            b++;                // b를 1증가시킴
        }
        b = 0;                  // b를 0으로 초기화
        while (b < a * 2 - 1)   // b가 a 를 2곱하고 1를 뺀 값보다 작다면 참
        {
            printf("*");        // 별   
            b++;                // b를 1증가시킴
        }
        printf("\n");           // 개행문자
        a++;                    // a를 1증가시킴

    }

    return 0;

}
