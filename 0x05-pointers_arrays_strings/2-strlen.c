#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string input pointer
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while ((s[i]) != '\0')
	{
		count++;
		i++;
	}
	return (i);
}

