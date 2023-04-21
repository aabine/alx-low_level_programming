#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;
	double f;
	const char *p = format;

	va_start(args, format);

	while (format && *p)
	{
		switch (*p)
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
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				p++;
				continue;
		}
		if (*(p + 1) != '\0')
			printf(", ");
		p++;
	}
	printf("\n");

	va_end(args);
}
