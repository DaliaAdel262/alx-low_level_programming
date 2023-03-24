#include "main.h"

/**
 * factorial - returns factorial of an integer
 * @n: interget to be computed
 * Return: fact or 0 or -1
 */

int factorial(int n)
{
	int fact;

	fact = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact *= factorial(n - 1);
	}
	return (fact);
}
