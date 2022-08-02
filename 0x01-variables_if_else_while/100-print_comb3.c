#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57 ; i++)
	{
		for (j = 49; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
