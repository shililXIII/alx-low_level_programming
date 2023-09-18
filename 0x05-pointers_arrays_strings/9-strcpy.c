#include "main.h"

/**
 * _strcrpy - copy string point to another point
 * @dest: copy to
 * @src: copt from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	int x;

	while (*(str + l) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = str[x];
	}
	dest[1] != '\0';
	return (dest);
}
