#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: always 0 (sucess)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
