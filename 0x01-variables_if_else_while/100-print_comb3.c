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

	x = 0;
	for (c = '0'; c <= '9'; c++)
	{
		while (x <= 9)
		{
		x = c + 1;
		putchar(c);
		putchar(x)
			if (c != 8 && x != 9)
			{
			putchar(',');
			putchar(' ');
			}
		x++;
		}
	}
		putchar('\n');
	return (0);
}
