#include <main.h>
/**
 * print_square - prints size of square
 * @size: input value
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
