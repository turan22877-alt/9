#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int cont;
    do {
        char sym;
        int s1, s2, s3;
        printf("символ для рисования: ");
        scanf(" %c", &sym);
        printf("Сторона 1: ");
        scanf("%d", &s1);
        printf("пересечение: ");
        scanf("%d", &s2);
        printf("Сторона 3: ");
        scanf("%d", &s3);
        int total_size = s1 - s2 + s3;
        printf("\nРезультат:\n\n");
        for (int y = 0; y < total_size; y++) {
            for (int x = 0; x < total_size; x++) {
                int in_sq1 = (y < s1 && x < s1);
                int in_sq3 = (y >= s1 - s2 && y < total_size && x >= s1 - s2 && x < total_size);
                int in_sq2 = (in_sq1 && in_sq3);
                if (in_sq2) {
                    printf(" ");
                }
                else if (in_sq1 || in_sq3) {
                    printf("%c", sym);
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\nПродолжить? (Да - любое число, кроме 0; Нет - 0): ");
        scanf("%d", &cont);
    } while (cont != 0);
    system("pause");
    return 0;
}