/*
Перепишите программу преобразования температур, выделив само преобразование в
отдельную функцию.
*/

#include <stdio.h>

#define LOWER 0 /*нижняя граница таблицы*/
#define UPPER 300 /*верхняя граница*/
#define STEP 20 /*размер шага*/

float temperature(int c, int fff);

int main()
{
    int f;
    printf("Celsius to Fahrenheit\n");
    for (f = LOWER; f <= UPPER; f += STEP)
    {
        printf("%3d %6.1f\n",f, temperature(0, f));
    }
    return 0;
}


float temperature(int cel, int fff)
{
    float p;
            
    p = (5.0/9.0)*(fff-32);
    return p;
}
