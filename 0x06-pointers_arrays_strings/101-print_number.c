#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer
 * Return: none
 */
void print_number(int n)
{
	unsigned int m, d, count;

	d = m;
	count = 1;
	if (n < 0)
	{
		putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		putchar(((m / count) % 10) + 48);
	}
}
