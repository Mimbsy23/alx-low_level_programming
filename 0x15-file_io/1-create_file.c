#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int my;
	int nletters;
	int mim;

	if (!filename)
		return (-1);

	my = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (my == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	mim = write(my, text_content, nletters);

	if (mim == -1)
		return (-1);

	close(my);

	return (1);
}
