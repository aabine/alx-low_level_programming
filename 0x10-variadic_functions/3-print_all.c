#include "variadic_functions.h"

/**
 * print_all - this function will prints anything
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *str, *separator = "";

	va_list argList;

	va_start(argList, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argList, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argList, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argList, double));
					break;
				case 's':
					str = va_arg(argList, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(argList);
}
