#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c;
	char *s;
	double f;
	const char *input = format;
	const char *sep = "";

	va_start(args, format);

	while (*input != '\0')
	{
		switch (*input)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("%s(nil)", sep);
				printf("%s%s", sep, s);
				break;
			default:
				input++;
				continue;
		}
		sep = ", ";
		input++;
	}
	printf("\n");

	va_end(args);
}
