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

	for (i = 0; len >= i; i++)
	{
		if (i % 2 == 0 && i != '\0')
		{
			printf("%c\n", str[i]);
		}
	}
}
