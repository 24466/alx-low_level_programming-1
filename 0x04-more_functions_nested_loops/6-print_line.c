#include "main.h"
/**
 * print_line - prints a line depending on n times
 * @n: input value
 * Reuturn: nothing
 */
void print_line(int n)
{
	int x = 196;

	for (n =  0; n <= 10; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
