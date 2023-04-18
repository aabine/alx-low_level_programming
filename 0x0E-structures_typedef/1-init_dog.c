#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Initializes a dog struct with name, age, and owner
 *
 * @d: Pointer to dog struct to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*Check if the pointer to the dog struct is not NULL*/
	if (d != NULL) {
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
