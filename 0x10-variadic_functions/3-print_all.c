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

	va_start(args, format);

	while (*input != '\0')
	{
		switch (*input)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				break;
			default:
				input++;
				continue;
		}
		if (*(input + 1) != '\0')
			printf(", ");
		input++;
	}
	printf("\n");

	va_end(args);
}
