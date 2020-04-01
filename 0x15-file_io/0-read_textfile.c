#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the std output
 * @filename: file to read and print
 * @letters: number of letter to print from the file
 *
 * Return: number of letters to read and print..
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int opn, rd, wrt;

	if (filename == '\0')
	{
		return (0);
	}
	opn = open(filename, O_RDONLY);
	if (opn == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == '\0')
	{
		return (0);
	}
	rd = read(opn, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	close(opn);
	wrt = write(STDOUT_FILENO, buf, rd);
	free(buf);
	if (wrt == -1)
	{
		return (0);
	}
	return (wrt);
}
