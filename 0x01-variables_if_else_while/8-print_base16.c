#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: must zero
 */

int main(void)
{
	char c;
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}
