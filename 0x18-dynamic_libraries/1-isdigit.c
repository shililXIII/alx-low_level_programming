#include "main.h"

/**
 * _isdigit - checker
 * @c: intger
 * Return: 0 and 1
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
