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
	int i;
	int len = strlen(s);
	char temp;
	char str = *s;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	printf("%s", s);
	printf("\n");
}
