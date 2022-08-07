#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints 0 to 98 seperated by commas
 * @n: integer variable
 * Return: nothing
 */
void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		if (n >= 0)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
		else if (n >= 98)
		{
			printf("%d", n);
			n = n - 1;

		}
	}
}
