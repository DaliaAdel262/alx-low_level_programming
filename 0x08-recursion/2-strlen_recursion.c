#include "main.h"

/**
 *  _strlen_recursion - returns length of a string
 * @s: string to be counted
 * Return: length of string or
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
