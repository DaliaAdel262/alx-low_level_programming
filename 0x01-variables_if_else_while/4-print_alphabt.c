#include<stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' && alpha == 'q')
		{
			continue;
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
