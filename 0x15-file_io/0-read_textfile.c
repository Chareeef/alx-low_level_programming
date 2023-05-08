#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the file's name
 * @letters: numbers of characters to be read and printed
 *
 * Return: The number of possibly read and printed characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	read_bytes = read(file, buffer, letters);
	if (read_bytes < 0)
		return (0);

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (read_bytes < 0)
		return (0);

	free(buffer);
	close(file);

	return (write_bytes);
}
