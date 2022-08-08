#include "main.h"
/**
 * more_numbers - prints 0 -14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 48; b <= 62; b++)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
