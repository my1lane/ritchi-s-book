/*
Напишите программу для подсчета пробелов, табуляций и новых строк.
*/

#include <stdio.h>

int main() 
{
    int count_whitespace, count_tabulation, count_new_string, c;

    count_new_string = count_tabulation = count_whitespace = 0;

    while ((c=getchar()) != EOF)
        {
        if (c=='\n')
            ++count_new_string;

        else if (c==' ')
            ++count_whitespace;
        
        else if (c=='\t') 
            ++count_tabulation;
        
        }
        

    printf("count_whitespace=%d\n count_new_string=%d\n count_tabulation=%d\n", count_whitespace, count_new_string, count_tabulation);

    return 0;


}