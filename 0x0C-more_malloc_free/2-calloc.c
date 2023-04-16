#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, and initializes it with zeros
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = calloc(nmemb, size);
	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		((char *)mem)[i] = 0;
	}

	return (mem);
}
