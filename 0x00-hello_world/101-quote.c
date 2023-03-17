#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	size_t i;
	char words[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
		for (i = 0; i < strlen(words); i++)
		{
			putchar(words[i]);
		}
		putchar('\n');
	return (1);
}
