#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg0, arg1, result;
	char op;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg0 = atoi(argv[1]);
	arg1 = atoi(argv[3]);

	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && arg1 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(arg0, arg1);

	printf("%d\n", result);

	return (0);
}
