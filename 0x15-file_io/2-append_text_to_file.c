#include "main.h"

/**
 * append_text_to_file - appends a text in a file
 * @filename: name of the file
 * @text_content: contents of the file
 * Return: 1 if successful, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, nwr;

	if (filename == NULL || *filename == '\0')
		return (-1);
	i = open(filename, O_RDWR | O_APPEND);
	if (i < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	nwr = write(i, text_content, strlen(text_content));
	if (nwr < 0)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
