#include "main.h"

/**
 * read_textfile - function that converts a binary number to an unsigned int
 * @filename: a
 * @letters: a
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *buffer;
	ssize_t numBytes;
	ssize_t i;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0777);
	if (x == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	numBytes = read(x, buffer, letters);
	if (numBytes == -1)
	{
		free(buffer);
		return (0);
	}
	for (i = 0; i < numBytes; i++)
	{
		write(STDOUT_FILENO, &buffer[i], 1);
	}
	if (close(x) == -1)
		return (0);
	free(buffer);
	return (numBytes);
}
