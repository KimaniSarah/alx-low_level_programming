#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int h = 1;
	int x = 0;
	unsigned int v = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			h *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		v = (v * 10) + (s[x] - '0');
		x++;
	}
	v *= h;
	return (v);
}
/**
 *  _isdigit - identify digits
 *  @c: digit to be identified
 *
 *  Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
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
	int num1;
	int num2;
	int multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (h = 1; h < argc; h++)
	{
		for (v = 0; argv[h][v] != '\0'; v++)
		{
			if (!_isdigit(argv[h][v]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	multiply = num1 * num2;

	printf("%d\n", multiply);
	return (0);
}
