#include <stdio.h>

/**
 * main - alphabet
 *
 * Description: for min = loop min ; maj = loop maj
 * Return: 0
 **/

int main(void)
{
	char min;
	char maj;

	for (min = 'a'; min <= 'z' ; min++)

		putchar(min);

	for (maj = 'A'; maj <= 'Z' ; maj++)

		putchar(maj);

	putchar('\n');

	return (0);
}
