#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string input value
 * Return: returns lenght of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len < s; len++)
	{
		if (len != '\0')
			len = len + s;
	}
	return (len);
}
