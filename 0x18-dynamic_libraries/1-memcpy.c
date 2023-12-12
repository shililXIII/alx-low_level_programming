#include "main.h"

/**
 * _memcpy - copy memo block
 * @dest: memo place
 * @src: memo place to copy
 * @n: num of bytes
 * Return: copied memo
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
