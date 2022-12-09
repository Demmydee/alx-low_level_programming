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

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(' ');
		if (c < 9)
		putchar(', ');
	}
		putchar('\n');
	return (0);
}
