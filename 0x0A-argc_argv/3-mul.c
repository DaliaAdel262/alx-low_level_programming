#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	i = 1;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = strtol(argv[i], NULL, 10);
		int y = strtol(argv[i + 1], NULL, 10);

		result = x * y;
		printf("%d\n", result);
	}
	return (0);
}

