#include "main.h"

/**
 * create_file - create a file
 * @filename: name
 * @text_content: text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, p = 0, mk;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY |  O_TRUNC);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = " ";
	}
	while (text_content[p] != '\0')
		p++;

	mk = write(file, text_content, p);

	if (mk == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
