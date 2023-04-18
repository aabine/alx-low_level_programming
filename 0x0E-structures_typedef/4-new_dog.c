#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct and initializes its values
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the newly created dog struct, or NULL if the
 *         memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogmem = malloc(sizeof(dog_t));

	if (dogmem == NULL)
	{
		return (NULL);
	}
	dogmem->name = name;
	dogmem->age = age;
	dogmem->owner = owner;
	return (dogmem);
}
