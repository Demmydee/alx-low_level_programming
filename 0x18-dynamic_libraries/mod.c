#include "main.h"

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
