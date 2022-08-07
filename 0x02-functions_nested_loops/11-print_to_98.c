#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints 0 to 98 seperated by commas
 * @n: integer variable
 * Return: always 0 (sucess)
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
	}
	return (n);
}
