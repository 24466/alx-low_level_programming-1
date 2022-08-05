#include "main.h"
#include <stdi.o>
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer
 * @int: integer value
 * Return: always 0 (sucess)
 */
int _abs(int)
{
	int a, b;

	if (a < 0)
	{
		b = abs(a);
		printf("%d\n", b);
	}
	else if (a >= 0)
	{
		printf("%d\n", a);
	}
	return (0);
}
