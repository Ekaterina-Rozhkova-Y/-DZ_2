#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    float A = 500.0f;   
    float B = 2000.0f;   
    float C = 300.0f;    
    float D = 3000.0f;   
    printf("\n--- Исходные данные ---\n");
    printf("Стоимость перчаток:  %.2f руб.\n", A);
    printf("Стоимость портфеля:  %.2f руб.\n", B);
    printf("Стоимость галстука:  %.2f руб.\n", C);
    printf("Выделенная сумма:    %.2f руб.\n", D);
    printf("\n--- Результат ---\n");
    printf("Общая стоимость:     %.2f руб.\n", A + B + C);
    printf("Сдача:               %.2f руб.\n", D - (A + B + C));

    return 0;
}