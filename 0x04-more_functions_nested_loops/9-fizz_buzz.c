#include<stdio.h>

/**
 * main - print numbers from 1 to 100 except multiples of three and five
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0)
		{
			if ((num % 5) == 0)
			{
				if (num == 100)
				{
					printf("FizzBuzz");
				}
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}

