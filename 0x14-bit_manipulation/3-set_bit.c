#include "main.h"

/**
 * set_bit - sets val of a bit to 1
 * @n: num to set
 * @index: index at which to set bit
 * Return: 1 success, or -1 if  error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	z = 1 << index;
	*n = *n | z;
	return (1);
}
