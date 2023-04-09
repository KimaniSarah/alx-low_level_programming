#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int h = 0;

	while (h != argc)
	{
		printf("%s\n", argv[h]);
		h++;
	}
	return (0);
}
