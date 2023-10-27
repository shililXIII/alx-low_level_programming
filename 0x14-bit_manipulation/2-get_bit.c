#include"main.h"

/**
 * get_bit - return val of a bit
 * @n: num to check bits
 * @index: index at which to check bit
 * Return: val of the bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divi, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divi = 1 << index;
	c = n & divi;
	if (c == divi)
		return (1);
	return (0);

}
