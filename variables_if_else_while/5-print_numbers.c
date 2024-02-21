#include <stdio.h>

/**
 * main - Compteur
 * Description: for = 0 to 9
 * Return: 0
 **/

int main(void)
{
	int nb;

	for (nb = 0; nb < 10; ++nb)
	{
		printf("%d", nb);
	}
	putchar('\n');

	return (0);
}
