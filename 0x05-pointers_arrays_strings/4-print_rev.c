#include "main.h"
#include <stdio.h>
int _strlen(char *s);
/**
 * print_rev - prints a sting in revrese and newline
 * @s: string input value
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	char temp;
	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	printf("%s", s);
	printf("\n");
}
