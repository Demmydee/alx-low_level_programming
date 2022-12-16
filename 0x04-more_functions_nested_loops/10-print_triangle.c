#include "main.h"

/**
 * print_triangle - draws a diagonal line on the terminal
 * @size: length of the triangle
 */
void print_triangle(int size)
{
	int k = 0, i, j, n;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			k += 1;
			for (j = 1; j < size; j++)
			{
				_putchar (' ');
			}
			for  (n = 1; n <= k; n++)
				_putchar ('#');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
