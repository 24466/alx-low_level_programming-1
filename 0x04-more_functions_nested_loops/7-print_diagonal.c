#include "main.h"
/**
 * print_diagonal - prints a diagonal line n times
 * @n: input value
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x, y;
	int v = 92;

	for (x = 0; x < n x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(v);
		if (n == 0 && n < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
