#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c, *s;
	double d;
	const char *input = format;

	va_start(args, format);

	while (input && *input)
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
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		if ((*(input + 1)) && (*input == 'c' || *input == 'i' || *input == 'f' || *input == 's'))
			printf(", ");
		input++;
	}
	printf("\n");

	va_end(args);
}
