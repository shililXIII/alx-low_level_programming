#include "main.h"
#include <stdio.h>

/**
 * errors - func to check file
 * @file_from: file from
 * @file_to: file to
 * @argv: argement v
 * Return: nothing
 */
void errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - to copy from file to another
 * @argc: num of argument
 * @argv: argument v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error;
	ssize_t chars, nwrite;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors(file_from, file_to, argv);
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buff, 1024);
		if (chars == -1)
			errors(-1, 0, argv);
		nwrite = write(file_to, buff, chars);
		if (nwrite == -1)
			errors(0, -1, argv);
	}
	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", file_from);
		exit(100);
	}
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", file_from);
		exit(100);
	}
	return (0);
}
