#include "main.h"
/**
 * leet - encodes string into 1337
 * @str: input string
 * Return: string
 */
char *leet(char *)
{
	int i, j;
	char x1[] = "aAeEoOtTlL";
	char x2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == x1[j])
			{
				str[i] = x2[j];
			}
		}
	}
	return (str);
}
