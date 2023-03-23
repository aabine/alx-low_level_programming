#include "main.h"


/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int c = i * j;

				if (j == 0)
				{
					_putchar(' ');
				}
				_putchar(' ');
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(c / 100 + '0');
					_putchar((c % 100) / 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
