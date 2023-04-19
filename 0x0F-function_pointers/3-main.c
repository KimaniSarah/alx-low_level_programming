#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	result = 0;
	if (*operator == '/' || *operator == '%')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
	}
	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = (*operation)(num1, num2);
	printf("%d\n", result);
	return (0);
}
