#include "main.h"

/**
 * _pow_recursion - return value of x power y
 * @x: integer
 * @y: power
 * Return: result or -1 or 1
 */

int _pow_recursion(int x, int y)
{
	int result;

	result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result *= _pow_recursion(x, y - 1);
	}
	return (result);
}
