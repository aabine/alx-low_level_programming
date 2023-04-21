#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a separator
 * and ends with a newline
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, noa;

	va_list args;   /* declare a list of arguments */

	va_start(args, n);  /* initialize the list */

	for (i = 0; i < n; i++)  /* loop through the arguments */
	{
		noa = va_arg(args, int);  /* get the next argument of type int */
		printf("%d", noa);  /* print the integer */

		/* if not the last argument and separator is not NULL, print separator */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");  /* print newline character */
	va_end(args);  /* end the list of arguments */
}
