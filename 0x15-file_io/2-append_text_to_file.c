#include "main.h"

/**
 * append_text_to_file - append text at za end of file
 * @filename: file name
 * @text_content: contents
 * Return: 1 exit -1 not exits
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdir, nlit, rwr;

	if (!filename)
		return (-1);
	fdir = open(filename, O_WRONLY | O_APPEND);
	if (fdir == -1)
		return (-1);
	if (text_content)
	{
		for (nlit = 0; text_content[nlit]; nlit++)
			rwr = write(fdir, text_content, nlit);
		if (rwr == -1)
			return (-1);
	}
	close(fdir);
	return (1);
}
