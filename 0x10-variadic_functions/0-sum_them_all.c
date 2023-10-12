#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all paramters
 * @n: num of paramters
 * @...: var num of paramters to calc them
 * Return: sum them all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
