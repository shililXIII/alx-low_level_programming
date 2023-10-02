#include <stdio.h>
#include "main.h"

/**
 * main - print arg passed
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
