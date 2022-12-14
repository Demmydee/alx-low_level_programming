#include "main.h"
/**
 * print_alphabet - entry point
 * Return: zero
 */
void print_alphabet(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
