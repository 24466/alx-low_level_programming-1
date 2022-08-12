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
	int i, left, right, len, temp;

	left = 0;
	right = len - 1;
	len = strlen(s);
	for (i = left; i < right; i++)
	{
		s[i] = temp;
		s[i] = s[right];
		s[right] = temp;

		right--;
	}
	printf("%s\n", *&s);
}

