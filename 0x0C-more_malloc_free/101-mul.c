#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - multiply 2 positive numbers
 * @argc:the number of arguments
 * @argv:contain the arguments
 *
 * Return:the multiplication
 */
int main(int argc, char *argv[])
{
	int h, v;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int multiply;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (h = 1; h < argc; h++)
	{
		for (v = 0; argv[h][v] != '\0'; v++)
		{
			if (!isdigit(argv[h][v]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	multiply = num1 * num2;
	printf("%d\n", multiply);
	return (0);
}
