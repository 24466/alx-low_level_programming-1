#include "main.h"
/**
 * more_numbers - prints 0 -14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int a, ch;

	for (a = 1; a <= 10; a++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + 48);
			}
			_putchar((ch % 10) + 48);
		}
	}
	_putchar('\n');
}
