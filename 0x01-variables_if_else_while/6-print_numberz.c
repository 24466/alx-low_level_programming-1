#include <stdio.h>
/**
 * main - print out numbers of base 10
 * Return: alway 0 (sucess)
 */
int main(void)
{
	int n[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(n[j]);
	}
	putchar('\n');
	return (0);
}
