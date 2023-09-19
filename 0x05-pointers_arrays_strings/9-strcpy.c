#include "main.h"

/**
 * *_strcrpy - copy string point to another point.
 * @dest: copy to
 * @src: copt from
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while 
	(src[i] != '\0');

	return (dest);
}
