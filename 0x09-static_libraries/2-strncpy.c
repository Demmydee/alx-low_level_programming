#include "main.h"

/**
 * _strncpy - copy the strings
 * @dest: destination string
 * @src: source string
 * @n: input integer
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
