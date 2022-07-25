#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content in the file that is null terminated
 * Return: 1 if successful, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, nrw;

	if (filename == NULL || *filename == '\0')
		return (-1);
	if (text_content == NULL)
		text_content = "";
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (i < 0)
		return (-1);
	nrw = write(i, text_content, strlen(text_content));
	if (nrw < 0)
		return (-1);
	close(i);
	return (1);
}
