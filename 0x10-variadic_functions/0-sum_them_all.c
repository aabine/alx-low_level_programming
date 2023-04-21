#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 * @...: variable number of arguments
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	size_t result = 0, i, noa;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		noa = va_arg(args, int);
		result += noa;
	}
	va_end(args);

	return (result);
}
