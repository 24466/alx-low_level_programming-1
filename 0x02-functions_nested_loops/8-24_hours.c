#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 24; a++)
	{
		for (b = 0; b <= 60; b++)
		{
			printf("%d:%d", a, b);
		}
	}
	printf("\n");
}
