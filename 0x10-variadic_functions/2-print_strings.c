#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a given separator.
 *
 * @separator: The separator to print between strings.
 * @n: The number of strings to print.
 * ...: The variable arguments list of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *noa;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Check if the number of arguments is zero */
		if (n == 0)
		{
			printf("nil");
		}

		noa = va_arg(args, char*);

		/* Check if the current string is null*/
		if (noa == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", noa);
		}

		/* Check if the separator is not null and checked for the last argument*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
