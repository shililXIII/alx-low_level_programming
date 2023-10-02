#include "main.h"
#include <stdio.h>

/**
 * main - print all arg recevice
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0 always.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
