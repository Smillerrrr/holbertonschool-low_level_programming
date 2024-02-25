#include "main.h"

/**
 * _abs - calcul
 *
 *@a: Calcul la valeur absolue d'un nombre
 * Return: 0
 **/

int _abs(int a)

{
	if (a > 0)
	{
		return (a * 1);
	}

	else if (a < 0)
	{
		return (a * -1);
	}

	else
	{
		return (0);
	}
}
