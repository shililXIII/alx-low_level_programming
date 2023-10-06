#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - alloctes memo using malloc
 * @b: num of bytes
 * Return: pointer to allocate memo
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
