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
	char q;
	char e;

	q = 'q';
	e = 'e';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != q && c != e)
		{
		putchar(c);
		}
	}
		putchar('\n');
	return (0);
}
