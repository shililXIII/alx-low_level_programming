#include "main.h"

/**
 * read_textfile - read the printed letters
 * @filename: file name
 * @letters: num of letter that printed
 * Return: num of letter that printed or 0 if falied
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdir;
	size_t nread, nwrite;
	char *buff;

	if (!filename)
		return (0);
	fdir = open(filename, O_RDONLY);

	if (fdir == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	nread = read(fdir, buff, letters);
	nwrite = write(STDOUT_FILENO, buff, nread);

	close(fdir);
	free(buff);
	return (nwrite);
}
