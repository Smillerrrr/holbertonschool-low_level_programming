#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers
 *
 * Description: Number for print
 **/

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n >= '0' && n <= '9')

			_putchar(n);
	}

	_putchar('\n');
}
