#include <stdio.h>

/*This function is executed automatically before main() function*/
void first(void) __attribute__((constructor));

/**
 * first - prints "You're beat! and yet, you must allow,\n"
 * @void: no return value
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
