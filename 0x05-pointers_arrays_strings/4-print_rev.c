#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string input value
 * Return: nothing
 */
void print_rev(char *s)
{
	int a = strrev(s);

	printf("%s\n", *&s);
}

