#include "main.h"

/**
 * factorial - return factorial of num
 * @n: num to return factorail
 * Return: factorail.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
