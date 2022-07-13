#include "main.h"
/**
 * swap_int: swaps integer values from two variables
 * @a: is a variable storing 1st integer
 * @b: 2nd variable storing an integer
 * return: we are not returning anything since is a void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

