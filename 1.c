#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Ukr");

    int a, b;
    float average;
    int difference, product;

    printf("--- Програма для обчислень ---\n");
    
    printf("Будь ласка, введіть перше ціле число: ");
    if (scanf("%d", &a) != 1) return 1; // Перевірка, чи ввів користувач саме число
    
    printf("Будь ласка, введіть друге ціле число: ");
    if (scanf("%d", &b) != 1) return 1;


    average = (float)(a + b) / 2.0f;
    difference = a - b;
    product = b * a;

    printf("\n--- Результати обчислень ---\n");
    printf("Середнє арифметичне чисел %d і %d: %.2f\n", a, b, average);
    printf("Різниця першого (%d) і другого (%d) числа: %d\n", a, b, difference);
    printf("Добуток другого (%d) і першого (%d) числа: %d\n", b, a, product);
    printf("----------------------------\n");

    return 0;
}