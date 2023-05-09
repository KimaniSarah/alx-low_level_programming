#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: file containing letters to be read and written
 * @letters:number of letters it should read and print
 * Return:actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	ssize_t total_bytes_read;
	ssize_t bytes_read;
	ssize_t bytes_to_write;
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = read(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	total_bytes_read = 0;
	while (total_bytes_read < letters &&
			(bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_to_write = bytes_read;
		if (total_bytes_read + bytes_to_write > letters)
		{
			bytes_to_write = letters - total_bytes_read;
		}
		bytes_written = write(STDOUT_FILENO, buffer, bytes_to_write);
		if (bytes_written != bytes_to_write)
	{
			close(fd);
			return (0);
		}

		total_bytes_read += bytes_written;
	}

	close(fd);
	return (total_bytes_read);
}
