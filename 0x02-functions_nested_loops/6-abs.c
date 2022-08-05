#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer
 * @a: integer value
 * Return: always 0 (sucess)
 */
int _abs(int a)
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
