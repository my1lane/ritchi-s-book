/*
печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300;
*/

/*
Усовершенствуйте программу преобразования температур таким образом, чтобы над
таблицей она печатала заголовок.
*/

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius to Fahrenheit\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}