#include<stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	int alpha;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (alpha = 97; alpha <= 102; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
