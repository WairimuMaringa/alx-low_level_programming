#include "main.h"

/**
 * read_textfile - reads a textfile and prints to the posix std outpt
 * @filename: name of file
 * @letters: letters
 * Return: actual no of letters read and printed, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(i, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(i);

	free(buffer);

	return (nwr);
}
