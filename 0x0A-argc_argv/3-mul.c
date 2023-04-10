#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two numbers from the command line.
 *
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the command line arguments.
 *
 * Return: 0 if successful, otherwise 1.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
