#include "main.h"

/**
 * _sqrt_recursion - return square root of num
 * @n: calc square of num
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - to fine natural sqrt root
 * @n: num to calc the sqr root
 * @i: iterator
 * Return: result
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > 0)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
