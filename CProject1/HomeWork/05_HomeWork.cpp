#include <stdio.h>
int main()
{
    // 변수 생성
    int i = 0;
    int j = 0;
 
    // 반복문
    while (i < 5)         // i 가 5보다 작다면 참
    {
        j = 0;            // j 의 값을 0으로 초기화
        while (j <= i)    // j 가 i 보다 작거나 같다면 참
        {
            printf("*");  // 별
            ++j;          // j를 1증가 시킴
        }
        printf("\n");     // 개행문자
        ++i;              // i를 1증가 시킴
    }
    return 0;
}