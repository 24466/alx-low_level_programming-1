#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @a: integer variable
 * Return: Always 0 (sucess)
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	_putchar(n);
	return (n);
}

