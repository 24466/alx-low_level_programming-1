#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string followed by newline
 * @str: input sting value
 * Return: nothing
 */
void _puts(char *str)
{
	printf("%s\n", *&str);
}
