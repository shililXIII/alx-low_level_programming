#include <stdio.h>
/**
 * main - print comb3
 * Return: always 0 (success)
*/
int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 47; m <= 57; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

