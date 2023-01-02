#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check character from
 * @c: character to be checked
 * Return: A pointer to the first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = o; s[i] != '\0; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0)
}
