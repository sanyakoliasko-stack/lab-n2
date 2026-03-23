#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double f;

    printf("--- Обчислення функції (Варіант 19) ---\n");
    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    printf("Введіть ціле число y: ");
    scanf("%d", &y);

    f = (pow(x, 2) + log2((double)x * y) - pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2));

    printf("\nРезультат обчислення:\n");
    printf("f(%d, %d) = %.6f\n", x, y, f);
    printf("--------------------------------------\n");

    return 0;
}