#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Description: nested while loop
 **/

void print_alphabet_x10(void)
{
	int rep;
	char alphab;

	for (rep = 0; rep < 10; rep++)
	{
		alphab = 'a';

		while (alphab <= 'z')

		{

		_putchar(alphab);

		alphab++;

		}
	_putchar('\n');

	}
}
