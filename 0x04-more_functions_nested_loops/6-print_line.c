#include "main.h"

/**
 * print_line - prints line n times
 * @n: number of lines printed
 * Return: character _ if n is an integer, \n if n is 0 or less
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
