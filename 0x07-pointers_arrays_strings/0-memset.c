#include "main.h"

/**
 * _memset - block of memory
 * @s: start of memo
 * @b: desired val
 * @n: num of byte
 * Return: n byte
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
