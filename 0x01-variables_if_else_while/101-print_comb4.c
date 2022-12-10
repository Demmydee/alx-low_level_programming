#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: must zero
 */

int main(void)
{
	int c;
	int x;
	int y;

	for (c = '0'; c <= '7'; c++)
	{
		x = c + 1;
		while (x <= '8')
		{
			y = x + 1;
			while (y <= '9')
			{
				putchar(c);
				putchar(x);
				putchar(y);
				if (c != '7')
					{
					putchar(',');
					putchar(' ');
					}
				++y;
			}
		++x;
		}
	}
		putchar('\n');
	return (0);
}
