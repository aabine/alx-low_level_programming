#include "main.h"

/**
 * print_line - this function will print straight line on the screen
 * @n: this is the function input.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
