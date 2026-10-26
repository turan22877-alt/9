#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
    setlocale(LC_CTYPE, "RUS");
    char a;
    do {
        int n;
        int count = 0;
        printf("Введите число: ");
        scanf("%ld", &n);

        int last = n % 10;

        while (n > 0) {
            if (n % 10 == last) {
                count++;
            }
            n = n / 10;
        }
        printf("Повторений последней цифры (%d): %d\n", last, count);
        printf("Продолжить? (Да - y, нет - n): ");
        scanf(" %c", &a);
    } while (a != 'n');
    system("pause");
    return 0;
}