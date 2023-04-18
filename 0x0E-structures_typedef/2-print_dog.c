#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the information of a dog
 * @d: pointer to a dog struct
 *
 * Description: This function prints the information of a dog, including its name,
 * age, and owner.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
