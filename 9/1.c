#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    printf("Варианта 2:\n\n");
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 10; col++) {
            printf("%4d", col);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}