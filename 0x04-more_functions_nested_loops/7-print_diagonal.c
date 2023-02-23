#include "main.h"

/**
 * print_diagonal - prints diagonal n times
 * @n: number of times diagonal to be repeated
 * Return: diagonal n times
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

