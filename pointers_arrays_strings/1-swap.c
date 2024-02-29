#include "main.h"

/**
 * swap_int - function
 *
 * @a: a=98, b=42
 * @b: a=42, b=98
 **/

void swap_int(int *a, int *b)

{
	int p1 = *a;
	int p2 = *b;

	*a = p2;
	*b = p1;
}
