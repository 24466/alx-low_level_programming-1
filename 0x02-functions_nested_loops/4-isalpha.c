#include "main.h"
/**
 * _isalpha - checks for both lower and uppercase charachters
 * @c: integer variable
 * Return: 1 or 0 depending if the condition is met
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
