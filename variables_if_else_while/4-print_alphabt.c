#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: for = a to z and if = condition
 * Return: 0
 **/

int main(void)
{
	char min;

	for (min = 'a'; min <= 'z'; min++)
	{
		if (min != 'e' && min != 'q')
			putchar(min);
	}
		putchar('\n')

			return (0);
}
