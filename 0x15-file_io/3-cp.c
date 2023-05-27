#include "main.h"
/**
 * print_error_and_exit - print error
 * @error_message:the error message
 */
void print_error_and_exit(const char *error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(EXIT_FAILURE);
}
/**
 * main - main
 * @argc:count
 * @argv:arguments
 * Return:int
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit("Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT
			| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error_and_exit("Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit("Can't write to file");
		if (bytes_written < bytes_read)
			print_error_and_exit("Write incomplete");
	}
	if (bytes_read == -1)
		print_error_and_exit("Can't read from file");

	if (close(fd_from) == -1)
		print_error_and_exit("Can't close fd_from");
	if (close(fd_to) == -1)
		print_error_and_exit("Can't close fd_to");
	return (0);
}
