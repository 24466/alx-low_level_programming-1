#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a sting in revrese and newline
 * @s: string input value
 * Return: nothing
 */
void print_rev(char *s)
{
	strrev(s);
	printf("%s", s);
	printf("\n");
}
