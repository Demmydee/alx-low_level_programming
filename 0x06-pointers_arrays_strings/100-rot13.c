#include "main.h"
/**
 * rot13 - encodes a string
 * @str: input string
 * Return: string
 */
char *rot13(char *str)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; str[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (str);
}
