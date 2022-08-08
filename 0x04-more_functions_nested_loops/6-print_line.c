#include "main.h"
/**
 * print_line - prints a line depending on n times
 * @n: input value
 * Reuturn: nothing
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_purchar(95);
	}
	_putchar('\n');
}
