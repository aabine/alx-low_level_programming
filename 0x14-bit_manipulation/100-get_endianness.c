#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void) {
	int digits = 1;
	int endian = digits;

	return (endian == 1) ? 1 : 0;
}
