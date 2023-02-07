/*
Напишите программу, которая будет печатать таблицу соответствия температур по Цельсию
температурам по Фаренгейту. Через цикл for
*/


#include <stdio.h>

#define LOWER 0 /*нижняя граница таблицы*/
#define UPPER 300 /*верхняя граница*/
#define STEP 20 /*размер шага*/
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));



    printf("\n");
    /*
    Измените программу преобразования температур так, чтобы она печатала таблицу в
    обратном порядке,.
    */
    int ffahr;

    for (ffahr = UPPER; ffahr >= LOWER; ffahr = ffahr - STEP)
        printf("%3d %6.1f\n", ffahr, (5.0/9.0)*(ffahr-32));

    
}