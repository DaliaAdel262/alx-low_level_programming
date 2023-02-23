#include "main.h"

/**
 * _isupper - Checks if alphabet is in uppercase
 * @c: character to be checked
 * Return: return 1 if in uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
