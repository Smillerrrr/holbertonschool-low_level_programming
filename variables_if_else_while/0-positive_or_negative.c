#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Check if random number if is positive, negative or 0
 *
 * n: number the variable
 * Return: 0
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
