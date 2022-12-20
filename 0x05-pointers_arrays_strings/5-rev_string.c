#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char val;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		val = s[i];
		s[i++] = s[len];
		s[len] = val;
	}
}
