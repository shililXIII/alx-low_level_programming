#include "main.h"
/**
 * _atoi - converts a str to int
 * @s: a string
 * Return: int.
 */
int _atoi(char *s)
{
unsigned int num = 0;
int digit = 1;

do {
if (*s == '-')
digit *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
	return (num *digit);
}
