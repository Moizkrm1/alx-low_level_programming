#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file to be read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of bytes read and printed.
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor */
	char *buf; /* Buffer for reading */
	ssize_t total_read; /* Total bytes read */
	ssize_t bytes_written; /* Bytes written to STDOUT */

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	total_read = read(fd, buf, letters);
	if (total_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, total_read);

	free(buf);
	close(fd);

	return (bytes_written);
}
