#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of size
 * @size: size of array
 * @c: char to assign
 * Descrption: create size of array
 * Return:  pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (0);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
