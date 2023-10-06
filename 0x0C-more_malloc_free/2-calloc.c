#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * memoset - memo file
 * @s: memo area
 * @b: char to copy
 * @n: num of time to copy b
 * Return: memo area s
 */

char *memoset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memo area for an array
 * @nmemb: num of elements of array
 * @size: size of each elements
 * Return: allocates memo
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
