#include "main.h"
/**
 *  _isdigit - checks for a digit through 0-9
 *  @c: integer variable parameter
 *  Return: 1 or 0 depending if the condition is met
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
