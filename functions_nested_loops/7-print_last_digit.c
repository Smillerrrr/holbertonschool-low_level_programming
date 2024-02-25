#include "main.h"
/**
 * print_last_digit - Affiche le dernier nombre
 *
 * @n: nombre entier et last dernier nombre
 * @last_digit: dernier nombre
 * Return: valeur du dernier nombre
 **/

int print_last_digit(int n)

{
	int last;

	if (n > 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}

	else

	{
		last = (n % 10) * -1;
		_putchar(last + '0');
		return (last);
	}

}
