#include <stdio.h>
/**
 * _memset(): fuction that fills n bytes of memory area pointed to by s with *s with constant byte b
 * char *s: is a charachter pointer varible
 * char b: is a character variable 
 * int n : is a interger variable
 */
char *_memset(char *s, char b, unsigned int n);
{
	n = b;
	*s = &n;
	return s;
}
