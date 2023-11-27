#include "main.h"

/**
 * append_text_to_file - a function that appends text at the
 * end of a file
 * @filename: name of the file
 * @text_content: string to be added to file
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(fd, text_content, letters);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
