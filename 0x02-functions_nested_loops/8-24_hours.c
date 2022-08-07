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
			if (a < 10)
			{
				printf("0");
				printf(a + 0);
			}
			else if (a >= 10)
			{
				printf((a / 10) + 0);
				printf((a % 10) + 0);
			}
			if (b < 10)
			{
				printf(":");
				printf("0");
				printf(b + '0');
			}
			else if (b >= 10)
			{
				printf(":");
				printf((j / 10) + "0");
				printf((j % 10) + "0");
			}
			printf("\n");
		}

	}
}
