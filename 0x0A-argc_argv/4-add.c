#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers.
 * @argc:The size of the argv array
 * @argv:An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int h;
	int v;
	int sum;

	if (argc < 1)
	{
		printf("0\n");
	}
	h = 1;
	sum = 0;
	while (h < argc)
	{
		v = 0;
		while (argv[h][v])
			/**
			 * iterare over argv to check if they are all digits or not
			 */
		{
			if (!isdigit(argv[h][v]))
			{
				printf("Error\n");
				return (1);
			}
			v++;
		}
		sum = sum + atoi(argv[h]);
		h++;
	}
	printf("%d\n", sum);
	return (0);
}


