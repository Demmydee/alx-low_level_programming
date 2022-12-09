#include <stdio.h>
/**
 * main - entry point
 *
 * Return: must zero
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar('%c', c);
	}
	return (0);
}
