#include "main.h"
/**
 * actual_prime - recurses to check if a number is prime
 * @n: input integer
 * @i: iterator
 * Return: 1 if n is a prime number otherwise return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
/**
 * is_prime_number - detects prime number
 * @n: input integer
 * Return: 1 if n is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
