#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc:The number of command line arguments
 * @argv:An array containing the program command line arguments
 *
 * Return: 0 or 1 if there areno 2 arguments to multiply
 */
int main(int argc, char *argv[])
{
	int h, v, z;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	h = atoi(argv[1]);
	/**
	 * atoi changes strings to integers
	 */
	v = atoi(argv[2]);
	z = h * v;

	printf("%d\n", z);
	return (0);
}
