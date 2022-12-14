#include "main.h"

/**
 * print_sign - entry point
 * @n: input
 * Return: 1 if number is positive, 0 if it is zero & -1 if negative
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
