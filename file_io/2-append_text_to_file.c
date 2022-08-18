#include "main.h"

/**
 * append_text_to_file -appends text at the end of a file
 * @filename: name
 * @text_content: text
 * Return: 1 or -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int ap = 0, txt = 0;

	if (!filename)
		return (-1);


	file = open(filename, O_RDWR | O_APPEND, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
	{
		while (text_content[txt] != '\0')
			txt++;

		ap = write(file, text_content, txt);

		if (ap == -1)
			return (-1);
	}
	close(file);
	return (1);
}

