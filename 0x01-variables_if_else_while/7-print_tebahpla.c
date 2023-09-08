#include <stdio.h>
/**
 * main - alphabet by rev
 * Return: always 0 (success)
 */
int main(void)
{
char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
