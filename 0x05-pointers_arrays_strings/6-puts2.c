#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other char in a string
 * @str: input string value
 * Return: nothing
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0 && i != '\0')
		{
			_putchar(str[i]);
		}
	}
}
