#include "main.h"
/* 
 * print_sign - print sign of int 
 * Return: 1 for great than zero 0 if equail zero -1 if less than zero
*/
int print_sign(int z)
{
	if (z > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (z < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
