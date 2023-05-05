#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void) {
	int digits = 1;
	char *endian = (char *)&digits;

	return (endian[0] == 1) ? 1 : 0;
}
