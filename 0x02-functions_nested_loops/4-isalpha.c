#include "main.h"
/**
 * _isalpha - checks for alphabetic characters both upper and lower
 * @c: integer varibles storing the alphabet
 * Return: 1 or 0 depending on the condition met
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
