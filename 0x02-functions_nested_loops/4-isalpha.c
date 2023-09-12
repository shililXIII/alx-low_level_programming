#include "main.h"
/*
 * _isalpha - check for alpha char
 * Return: 1 for alpha 0 for otherwish.
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
