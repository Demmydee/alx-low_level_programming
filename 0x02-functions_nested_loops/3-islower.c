#include "main.h"

/**
 * _islower - entry point
 *
 * Return: 1 if lowercase otherwise 0
 */

int _islower(int c)
{
	char i;
	int j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			j = 1;
		}
	}
	return (j);
}
