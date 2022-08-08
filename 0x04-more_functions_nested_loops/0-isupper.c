#include "main.h"
/**
 * _isupper - checkes for upcase character
 * @c: stores a charcter integer variable
 * Return: 1 or 0 depending on the condition met
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
