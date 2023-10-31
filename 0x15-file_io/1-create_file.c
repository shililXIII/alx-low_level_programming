#include "main.h"

/**
 * create_file - create file
 * @filename: file name
 * @text_content: text content in file
 * Return: 1 success -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int fdir, nlit, rwrite;

	if (!filename)
		return (-1);
	fdir = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fdir == -1)
			return (-1);
	if (!text_content)
		text_content = "";
	for (nlit = 0; text_content[nlit]; nlit++)
	rwrite = write(fdir, text_content, nlit);
	if (rwrite == -1)
		return (-1);
	close(fdir);
	return (1);
}
