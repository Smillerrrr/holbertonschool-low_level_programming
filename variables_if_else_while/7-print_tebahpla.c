#include <stdio.h>
/**
 * main - reverse alphabet
 *
 * Description: alphaMin = z to a
 * Return: 0
 **/

int main(void)
{
	char alphaMin;

	for (alphaMin = 'z'; alphaMin >= 'a'; alphaMin--)

		putchar(alphaMin);

	putchar('\n');

	return (0);
}
