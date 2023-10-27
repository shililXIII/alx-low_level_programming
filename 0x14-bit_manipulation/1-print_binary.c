#include "main.h"
#include <stdio.h>

/**
 * _pow - func calc base ^ power
 * @base: exponent base
 * @power:exponent  power
 *Return: power of num
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints num in binary
 * @n: num to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divi, c;
	char f;

	f = 0;
	divi = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divi != 0)
	{
		c = n & divi;
		if (c == divi)
		{
			f = 1;
			printf("1");
		}
		else if (f == 1 || divi == 1)
		{
			printf("0");
		}
		divi >>= 1;
	}
}
