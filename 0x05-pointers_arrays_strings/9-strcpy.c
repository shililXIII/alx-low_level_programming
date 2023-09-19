#include "main.h"
#include <stdio.h>
/**
 * char *_strcrpy - copy string point to another point
 * @dest: copy to
 * @src: copt from
 * Return: string
*/

char _strcpy(char *dest, char *src)
{
	int l;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
