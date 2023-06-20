/* functions definitions for operations */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of a and b
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns the remainder of dividing two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a and b
 */

int mod(int a, int b)
{
	return (a % b);
}
