#include "main.h"

/**
 * create_file - create a new file, truncate it if it already exist
 * @filename: the file's name
 * @text_content: the string to append to the file
 *
 * Return: 1 if success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write_bytes;
	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (file == -1)
		file = open(filename, O_TRUNC | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		write_bytes = write(file, text_content, strlen(text_content));
		if (write_bytes == -1)
			return (-1);
	}

	close(file);

	return (1);
}
