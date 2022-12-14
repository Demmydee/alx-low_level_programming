#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * @i: input
 * Return: 0
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			printf("%d", i);

			if ( i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; i >= 98; i++)
		{
			printf("%d", i);

			if ( i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
