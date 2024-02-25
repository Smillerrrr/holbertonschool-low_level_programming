#include "main.h"
#include <stdio.h>

/**
 * times_table - Table de multiplication
 *
 * Description: Print a table of multiplication zezro to nine
 * Return: 0
 **/

void times_table(void)
{
    int a;
    int b;

    for (a = 0; a <= 9; a++)
    {
	    _putchar('0');

	    for (b = 0; b <= 9; b++)
	    {
		    int c = a * b;

		    _putchar(b == '0' && (b < 10 && (b / 10) + '0'));
		    _putchar((c % 10) + '0');

		    if (b < 9 )
		    {
			    _putchar(',');
			    _putchar(' ');
		    }
	    }
			putchar('\n');
    }
}
