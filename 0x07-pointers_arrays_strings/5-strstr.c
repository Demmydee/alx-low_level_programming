#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to check substring from
 * @needle: substring to be checked
 * Return: A pointer to the beginning of substring
 * or null if no substring found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
