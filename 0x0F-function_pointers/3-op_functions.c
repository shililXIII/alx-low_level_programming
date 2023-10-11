#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum to two num
 * @a: frist num
 * @b: second num
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return sub of two num
 * @a: frist num
 * @b: second num
 * Return: sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return mult of two num
 * @a: frist num
 * @b: second num
 * Return: mul of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return div of two num
 * @a: frist num
 * @b: second num
 * Return: div of two num
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return remainder of div
 * @a: frist num
 * @b: second num
 * Return: remainder of div
 */

int op_mod(int a, int b)
{
	return (a % b);
}
