#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
	/* Base cases: square root of 0 and 1 is itself */
	if (n == 0 || n == 1)
	{
		return n;
	}

	/* Recursive case: divide the number by 2 and pass it to the next recursive call */
	int root = _sqrt_helper(n, 1, n);

	/* Check if the square of the root is equal to n */
	if (root * root == n)
	{
		return root;
	}
	else
	{
		/* If the square of the root is not equal to n, return -1 */
		return -1;
	}
}

/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 *
 * @n: the number to find the square root of
 * @start: the starting point of the search range
 * @end: the ending point of the search range
 *
 * Return: the square root of n, rounded down to the nearest integer
 */

int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	/* Base case: if the start and end points are adjacent, return the lower value */
	if (mid == start || mid == end)
	{
		return mid;
	}

	/* Recursive case: narrow the search range and make the next recursive call */
	if (mid * mid > n)
	{
		return _sqrt_helper(n, start, mid);
	}
	else
	{
		return _sqrt_helper(n, mid, end);
	}
}

