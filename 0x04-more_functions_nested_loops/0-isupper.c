#include "main.h"

/**
 * _isupper - tests case of a given character
 * @c: inputted character
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	char i;
	int upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			upper = 1;
		}
	}
	return (upper);
}
