#include <stdio.h>

void rabbit(void)__attribute__((constructor));

/**
 * rabbit - print befor main
 * func exe
 */

void rabbit(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
