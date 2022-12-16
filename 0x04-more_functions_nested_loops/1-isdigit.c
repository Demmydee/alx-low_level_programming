#include "main.h"


/**
 * _isdigit - tests if input is a digit
 * @c: input
 * Return: 1 if it is digit and 0 if it is not
 */

int _isdigit(int c)
{
	int i, digit;

	digit = 0;
	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			digit = 1;
		}
	}
	return (digit);
}
