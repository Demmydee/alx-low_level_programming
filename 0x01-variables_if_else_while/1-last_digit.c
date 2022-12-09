#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: must be 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int z = n % 10; /*holds value of the last digit*/

	if (z > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n z);
	}
	else if (z == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n z);
	}
	else if ((z < 6) && !(z == 0))
	{
		 printf("Last digit of %d is %d and is less than 6 and not 0\n", n z);
	}
	return (0);
