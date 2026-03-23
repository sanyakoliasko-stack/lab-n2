#include <stdio.h>

int main() {
    double a, b, c, y;

    printf("--- Програма для обчислення виразу (Варіант 19) ---\n");

    printf("Введіть значення a: ");
    scanf("%lf", &a); // Використовуємо %lf для типу double

    printf("Введіть значення b: ");
    scanf("%lf", &b);

    printf("Введіть значення c: ");
    scanf("%lf", &c);

    y = (a + 4 * b - c * c) / (2 * a * b * c);

    printf("\n--- Результати ---\n");
    printf("Введені дані: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("Вираз: y = (a + 4b - c^2) / (2abc)\n");
    printf("Результат: y = %f\n", y);
    printf("----------------------------------------------\n");

    return 0;
}