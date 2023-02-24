#include<stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor of 612852475143
 * Return: Always 0.
 */

int main(void)
{
	long i, maxf, x;
	long number = 612852475143;
	long square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxf = number / i;
			for (x = 1; x <= sqrt(maxf); x++)
			{
				if (maxf % x == 0)
				{
					continue;
				}
			}
		}
	}
	printf("%ld\n", maxf);
	return (0);
}


