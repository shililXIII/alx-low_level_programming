#include "main.h"

/**
 * flip_bits - counts the num of bits to change one to aonther
 * @n: fst num
 * @m: sec num
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int curr;
	unsigned long int z = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = z >> a;
		if (curr & 1)
			c++;
	}
	return (c);
}
