#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a dog_t struct
 * @d: pointer to dog_t struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d); /* free memory allocated for the struct */
}
