#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: supplied string
 * Return: 0
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}
	if (sign < 0)
		total = (-total);
	return (total);
}
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < 3; i++)
	{
		res = res * _atoi(argv[i]);
	}
	printf("%d\n", res);

	return (0);
}
