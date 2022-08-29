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
		if (len % 2 == 0)
		{
			printf("%s %d", str, str[i]);
		}
	}
}
