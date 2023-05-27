#include "main.h"
/**
 * buffer_creator - creates a storage of 1024 from the buffer
 * @name:the name of the file used to stor the characters
 * Return:the allocated space (a pointer)
 */
char *buffer_creator(char *name)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", name);
		exit(99);
	}

	return (buffer);
}

/**
 * file_closer - closes the file using file descriptor
 * @file_d:file descriptor
 * Return: void
 */
void file_closer(int file_d)
{
	int c;

	c = close(file_d);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - copy files
 * @argv:arguments
 * @argc:count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buffer_creator(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	file_closer(from);
	file_closer(to);
	return (0);
}
