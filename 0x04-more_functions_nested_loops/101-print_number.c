#include "main.h"
void print_integer(int m)

/**
 * print_number - prints an integer
 * @n: input
 * Return: 0
 */
void print_number(int n)
{
	if (n == 0)
		_pitchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - prints n
 * @m: an unsigned integer
 * Return: 0
 */
void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
}
