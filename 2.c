#include <stdio.h>

int main() {
    const double a = 5.0;
    const double b = 2.5;
    const double c = 3.0;

    double y = (a + 4 * b - c * c) / (2 * a * b * c);

    printf("--- Програма для обчислення виразу ---\n");
    printf("Константи: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("Формула: y = (a + 4b - c^2) / (2abc)\n");

    printf("\n--- Результат ---\n");
    printf("y = %d\n", y); 
    printf("----------------------------------------------------\n");

    return 0;
}