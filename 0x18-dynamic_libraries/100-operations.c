#include "main.h"
/**
 * add - entry point
 * @a:first integer
 * @b: second integer
 * Return: result of a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: 0
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides value of character a by that of b
 * @a: The number to divide
 * @b: The number to divide with
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * sub - subtract one number from another
 * @a: Number to subtract from
 * @b: Number to subtract
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mod - finds the remainder when a number is dicided by another
 * @a: Number to divide
 * @b: Number to divide with
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mod(int a, int b)
{
	return (a % b);
}
