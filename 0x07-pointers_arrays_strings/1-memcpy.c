#include <stdio.h>
#include "main.h"
/**
 * _memcpy - fuction copies contentes of src to dest n times
 * @src: char pointer destination of source of data to be copied
 * @dest: char pointer array where data to be stored
 * @n: the number of times to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(src + i) = dest;
	}
	return (dest);
}
