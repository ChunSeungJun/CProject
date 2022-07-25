#include <stdio.h>

int main() {
    int I = 1;
    int Count = 1;
    int J = 1;
    int Line = 0;
    while (J <= 27) {
        Line = 0;
        while (Line < 3)
        {
            printf("%d x %d = %d \t", I, Count, I * Count);
            ++Line;
            ++I;
            ++J;
        }
        ++Count;
        I = 1;
        printf("\n");
    }
    printf("\n");
    I = 4;
    Count = 1;
    while (J <= 54) {
        Line = 0;
        while (Line < 3)
        {
            printf("%d x %d = %d \t", I, Count, I * Count);
            ++Line;
            ++I;
            ++J;
        }
        ++Count;
        I = 4;
        printf("\n");
    }
    printf("\n");
    I = 7;
    Count = 1;
    while (J <= 81) {
        Line = 0;
        while (Line < 3)
        {
            printf("%d x %d = %d \t", I, Count, I * Count);
            ++Line;
            ++I;
            ++J;
        }
        ++Count;
        I = 7;
        printf("\n");
    }
    return 0;
}



