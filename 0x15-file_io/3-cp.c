#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * add_file - copy and check file contents
 * @fd_from: file descriptor from
 * @fd_to: file descriptor to
 * @argv: arguments
 */
void add_file(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: parameters or arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd_error;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	add_file(fd_from, fd_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_from, buf, 1024);
		if (nchars == -1)
			add_file(-1, 0, argv);
		nwr = write(fd_to, buf, nchars);
		if (nwr == -1)
			add_file(0, -1, argv);
	}
	fd_error = close(fd_from);
	if (fd_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	fd_error = close(fd_to);
	if (fd_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
