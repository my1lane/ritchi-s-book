/*
Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел.
*/

#include <stdio.h>

int main()
{
    int c = ' ', prev_sym = ' ';

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || prev_sym != ' ')
        {
            putchar (c); 
        }
        prev_sym = c; 
    }
}
