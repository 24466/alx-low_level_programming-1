#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: input value ingeter pointer
 * @b: input value ingeter pointer
 * Return: nothing
 */
int swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
