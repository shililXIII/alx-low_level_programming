#include "main.h"

/**
 * _strlen - long of string
 * @s: is string
 * Return: lenght
*/

int _strlen(char *s)
{
	int longi = 0;
	
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
					     
