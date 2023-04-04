#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int sum0 = 0, sum1 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum0 += a[i * size + i];
		sum1 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum0, sum1);
}
