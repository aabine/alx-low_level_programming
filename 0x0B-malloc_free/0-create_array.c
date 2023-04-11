#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: pointer to the created array, or NULL if size is 0 or if memory
 * allocation fails
 */

char *create_array(unsigned int size, char c)
{
	size_t counter;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
	{
		return (NULL);
	}

	/* initialize each element of the array with the given character */
	for (counter = 0; counter < size; counter++)
	{
		ar[counter] = c;
	}

	return (ar);
}
