#include "main.h"

/**
 * _isalpha - entry point
 * @c: test input
 * Return: 1 if lowercase otherwise 0
 */

int _isalpha(int c)
{
	char i j; /* lower cse and upper case */
	int k = 0; 

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				k = 1;
			}
		}
	}
	return (k);
}
