#include "main.h"

/**
 * _pow_recursion - return val y raised to y
 * @x: val to rasie
 * @y: power
 * Return: result to power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
