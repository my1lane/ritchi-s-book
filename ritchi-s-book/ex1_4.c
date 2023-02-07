/*
Напишите программу, которая будет печатать таблицу соответствия температур по Цельсию
температурам по Фаренгейту.
*/

#include <stdio.h>
 
 int main()
 {
    float fahr, celsius;
    float lower, upper, step;
    
    lower = -17.8; /* нижняя граница таблицы температур */
    upper = 149.0; /* верхняя граница */
    step = 11.1; /* шаг */
    
    celsius = lower;
    while (celsius <= upper) {
        fahr= (9.0/5.0) * (celsius+32.0);
        printf ("%5.1f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
 }