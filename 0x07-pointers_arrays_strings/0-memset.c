#include <stdio.h>
#include "main.h"
/**
 *_memset - fuction that fills n with b pointed to by s
 * @s: is a charachter pointer varible
 * @b: is a character variable
 * @n : is a interger variable
 * Return: pointer to dest(destination)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
