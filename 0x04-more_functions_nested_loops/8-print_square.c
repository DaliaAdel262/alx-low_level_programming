#include "main.h"

/**
 * print_square - prints square of size
 * @size: size of a square
 * Return: return square of size
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
