#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string input pointer
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i;
	while (i != '\0')
		i = i + i;
	return (i);
}

