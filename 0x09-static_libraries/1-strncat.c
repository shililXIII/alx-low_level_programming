#include "main.h"
/**
 * _strncat - con tow string
 * @dest: input val
 * @src: input val
 * @n: input val
 * Return: dest
*/

char *_strncat(char *dest, char *src,  int n)
{
	int i;
	int j;
				     
	i = 0; 
	while (dest[i] != '\0')
	{								                       i++; 
	}
	j = 0;
	while (j < n && dest[j] != '\0')						       {
												                dest[i] = src[j];
														i++;
														j++;
	}
	dest[i] = '\0';
	return (dest);
}
