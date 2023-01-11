#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: NULL if function fails, or str is either NULL or ""
 * otherwise return a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **array;
	int i = 0, j, x, y = 0, len = 0, cnt = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			cnt++;
	}
	if (cnt == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (cnt + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && y < cnt; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0;
			x = i;
			while ((str[x] != ' ' || str[x] != '\t') && str[x] != '\0')
				x++, len++;
			array[y] = malloc((len + 1) * sizeof(char));
			if (array[y] == NULL)
			{
				for (y = y - 1; y >= 0; y++)
					free(array[y]);
				free(array);
				return (NULL);
			}
			for (x = 0; x < len; x++, i++)
				array[y][x] = str[i];
			array[y++][x] = '\0';
		}
	}
	array[y] = NULL;
	return (array);
}
