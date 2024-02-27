#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by a new line
 *
 * @size: is the size of the square
 **/

void print_square(int size)
{
	int lng;
	int larg;

	if (size > 0)
	{
		for (larg = 0; larg < size; larg++)
		{
			for (lng = 0; lng < size; lng++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
