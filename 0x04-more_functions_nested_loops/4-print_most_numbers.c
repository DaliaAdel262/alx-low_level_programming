
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 && c == 52)
		{
			continue;
		}
		else
		{
			_putchar(c);
		}
	}

	_putchar('\n');

}
