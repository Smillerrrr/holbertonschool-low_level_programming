#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - alphab
 *
 * Description: putchar alphabet
 * Return: 0
 **/

void print_alphabet(void)

{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
		_putchar(alphab);

	_putchar('\n');
}
