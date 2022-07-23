#include "main.h"

/**
 * read_textfile - read letters from text
 * @filename: the file
 * @letters: text in file
 * Return: text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int rd;
	char *buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	rd = read(file, buffer, letters);

	write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(file);
	return (rd);
}
