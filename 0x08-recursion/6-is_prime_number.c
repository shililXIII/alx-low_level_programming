#include "main.h"

/**
 * is_prime_number - figure if num is prime or not
 * @n: input
 * Return: 1 if num is prime 0 if it's not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calc num if its prime
 * @n: num to input
 * @i: iterator
 * Return: 1 if its prime 0 or not
*/

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && n > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
