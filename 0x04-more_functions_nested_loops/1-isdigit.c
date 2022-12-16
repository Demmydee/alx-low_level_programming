#include "main.h"


/**
 * _isdigit - tests if input is a digit
 * @c: input
 * Return: 1 if it is digit and 0 if it is not
 */

int _isdigit(int c)
{
	int digit = 0;
	char i = '0';

	for (; i < '10'; i++)
	{
		if (i == c)
		{
			digit = 1;
			break;
		}
	}
	return (digit);
}
