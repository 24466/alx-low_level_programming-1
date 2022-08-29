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
	char ch;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}
	printf("%s", s);
	printf("\n");
}
