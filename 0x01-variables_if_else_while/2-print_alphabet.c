#include <stdio.h>
/**
 * main - the function prints lowercase alphabet using putchar
 * @n: this is an integer containning the limit or maximum number
 * Return: return nothing as aslways
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
