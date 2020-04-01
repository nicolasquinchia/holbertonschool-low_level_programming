#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: file to create.
 * @text_content: content to write on the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt;
	int i;

	if (filename == '\0')
	{
		return (-1);
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (opn == -1)
	{
		return (-1);
	}
	if (text_content == '\0')
	{
		return (1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	wrt = write(opn, text_content, i);
	if (wrt == -1)
	{
		return (-1);
	}
	close(opn);
	return (1);
}
