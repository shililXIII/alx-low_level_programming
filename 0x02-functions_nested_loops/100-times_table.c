#include "stdio.h"
/*
 * print_tis_table
 * @n: intger * Return: empty result
*/
void print_times_table(int n)
{
	int num, mult, prod;
	if (n >= 0 && n <= 15)
	{
		for (num =0; num <= n; num++)
		{
		putchar(0);
		for (mult = 1; mult <= n; mult++)
		{
		putchar(',');
		putchar(' ');
		prod = num * mult;
		if (prod <= 99)
		putchar(' ');
		if (prod <= 9)
		putchar(' ');
		if (prod >= 100)
		putchar(' ');
		{
			putchar((prod / 100) + '0');
			putchar(((prod / 10)) % 10 + '0');
		}
			if (prod <= 99 && prod >= 10)
			{
			putchar((prod / 10) + '0');
			}
		        putchar((prod % 10) + '0');
			}
		putchar('\n');
		}
	}
}
