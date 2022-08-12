#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * @a: input pointer value
 * @b: input pointer value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

