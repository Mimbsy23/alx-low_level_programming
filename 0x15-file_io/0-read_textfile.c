#include "main.h"

/**
 * read_textfile - this code reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nid, mim;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nid = read(fd, buf, letters);
	mim = write(STDOUT_FILENO, buf, nid);

	close(fd);

	free(buf);

	return (mim);
}
