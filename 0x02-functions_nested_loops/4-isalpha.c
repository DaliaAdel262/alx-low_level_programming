#include "main.h"

/**
 * _isalpha - cheacks for alphabetic characters
 * @c: character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
